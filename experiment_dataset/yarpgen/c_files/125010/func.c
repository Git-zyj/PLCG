/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125010
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_15 = ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) (unsigned char)71)), (var_4)))));
    var_16 = ((/* implicit */signed char) var_1);
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_1 [(_Bool)1] [i_0]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_8 [i_3] [i_3] |= ((/* implicit */unsigned short) (-((~(10477534665136561522ULL)))));
                        var_18 = ((/* implicit */_Bool) 7969209408572990093ULL);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) (unsigned short)29819)) - (29805)))))) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) var_9))));
                arr_11 [i_4] [i_1] [i_4] = ((/* implicit */unsigned char) 14545270586969769886ULL);
            }
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_10 [i_5]))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        {
                            arr_22 [i_0] [i_0] [i_0 - 1] [i_6] = arr_4 [i_0] [i_7] [i_7];
                            var_21 &= ((/* implicit */unsigned long long int) var_5);
                            var_22 = ((/* implicit */unsigned long long int) (unsigned short)41992);
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_9 = 1; i_9 < 18; i_9 += 4) 
            {
                for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) 
                        {
                            var_23 += ((((((/* implicit */int) var_8)) + (2147483647))) << (((((((/* implicit */int) (signed char)-20)) + (31))) - (11))));
                            arr_33 [(_Bool)1] [i_11] [i_8] = ((/* implicit */int) (_Bool)1);
                            arr_34 [i_11] [i_11] [i_11] [i_11] = var_11;
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_4))));
                        }
                        for (signed char i_12 = 1; i_12 < 19; i_12 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned short) var_0);
                            var_26 += ((/* implicit */unsigned int) var_11);
                        }
                        for (signed char i_13 = 1; i_13 < 19; i_13 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (~((~(((/* implicit */int) var_13)))))))));
                            arr_40 [i_0 - 1] [i_13 - 1] = ((arr_19 [i_0 - 1]) <= (((/* implicit */unsigned long long int) arr_9 [i_0 - 1] [i_9 + 2] [i_13 - 1])));
                        }
                        arr_41 [i_10] [i_9] [i_8] [15LL] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)91))));
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_18 [i_9] [i_8] [i_10])))))));
                        var_29 = ((/* implicit */unsigned short) (unsigned char)140);
                    }
                } 
            } 
            arr_42 [i_8] = ((/* implicit */short) ((unsigned int) (+(((/* implicit */int) var_6)))));
            arr_43 [i_8] = ((/* implicit */unsigned short) (_Bool)0);
            var_30 -= ((/* implicit */int) 311849715U);
            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) arr_28 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]))));
        }
        arr_44 [i_0 - 1] [(_Bool)1] = ((/* implicit */unsigned char) arr_37 [i_0] [i_0] [i_0] [16ULL]);
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        arr_47 [i_14] = ((/* implicit */short) (+(654911635)));
        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (((+(((/* implicit */int) arr_7 [(unsigned char)4] [i_14])))) < ((((+(var_3))) - (((/* implicit */int) ((((/* implicit */int) arr_15 [i_14] [i_14] [i_14] [(unsigned char)12])) > (((/* implicit */int) var_11))))))))))));
    }
    /* vectorizable */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
    {
        var_33 = ((/* implicit */long long int) ((short) (+(var_2))));
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (unsigned char i_17 = 2; i_17 < 15; i_17 += 4) 
            {
                {
                    arr_57 [(unsigned short)3] [i_15] [i_15] = var_7;
                    /* LoopSeq 1 */
                    for (long long int i_18 = 0; i_18 < 19; i_18 += 4) 
                    {
                        arr_61 [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(14078072311018898066ULL)))) || (((/* implicit */_Bool) ((2040783013U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (~(((/* implicit */int) (unsigned short)55229)))))));
                        arr_62 [i_16] [i_15] [i_15] [i_15] = ((/* implicit */signed char) arr_6 [i_15] [i_16] [i_16] [i_16] [i_18]);
                    }
                    var_35 = ((/* implicit */short) arr_46 [i_17]);
                }
            } 
        } 
    }
    var_36 = ((/* implicit */_Bool) 737860387);
}
