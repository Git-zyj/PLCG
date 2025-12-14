/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116641
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
    var_19 = ((/* implicit */_Bool) ((signed char) 9223372036854775807LL));
    var_20 -= ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((_Bool) ((var_7) & (((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [(_Bool)0] [i_1]))))) ? ((~(((/* implicit */int) var_16)))) : (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) ((var_1) >= (((((/* implicit */_Bool) 519411678)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (signed char)15))))))))))));
            var_22 |= ((/* implicit */unsigned int) arr_1 [i_0]);
        }
        for (int i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) var_10);
            var_24 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)15)) <= (((/* implicit */int) (_Bool)0))));
        }
        for (int i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                for (unsigned char i_5 = 3; i_5 < 19; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        {
                            arr_17 [i_0] [i_0] [i_5] [i_0] [i_0] = ((short) ((unsigned char) var_8));
                            var_25 = ((/* implicit */long long int) var_6);
                            var_26 = ((/* implicit */unsigned long long int) (~((~(((((/* implicit */_Bool) var_16)) ? (arr_4 [i_0] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
            } 
            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) 0)))))) : ((~(((3946557493794554535ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-15)))))))));
            var_27 *= ((((/* implicit */unsigned long long int) ((arr_4 [10] [10]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) - ((-(var_5))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0]);
                            arr_33 [i_0] [i_7] [i_7] [i_9] [(_Bool)1] = ((/* implicit */_Bool) ((unsigned int) (signed char)(-127 - 1)));
                            arr_34 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
                        }
                        arr_35 [(signed char)19] [i_7] = ((/* implicit */short) (-(arr_23 [i_9] [i_8] [i_7] [i_0])));
                        arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_3);
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_28 = ((/* implicit */_Bool) 0LL);
                            arr_40 [0ULL] [0ULL] [i_9] = ((/* implicit */unsigned long long int) var_15);
                        }
                        arr_41 [i_8] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) arr_3 [i_0]))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                var_29 = ((/* implicit */unsigned int) var_14);
                var_30 = ((/* implicit */short) (_Bool)1);
                arr_44 [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_12])) == (((/* implicit */int) arr_10 [i_7] [i_7] [0U]))));
            }
            /* LoopNest 2 */
            for (unsigned short i_13 = 2; i_13 < 16; i_13 += 1) 
            {
                for (unsigned char i_14 = 0; i_14 < 20; i_14 += 2) 
                {
                    {
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) 10))));
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)15)) && (((/* implicit */_Bool) arr_31 [i_13] [i_13 + 1] [i_0]))));
                        var_33 = ((/* implicit */short) ((((((/* implicit */int) (signed char)127)) & (((/* implicit */int) arr_0 [i_0])))) & (((/* implicit */int) (signed char)-16))));
                        arr_51 [i_0] [i_13] [i_13] [i_13 - 2] [i_0] [i_0] = ((short) arr_28 [2U] [i_7] [i_0]);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_15 = 0; i_15 < 20; i_15 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 2) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            arr_62 [i_0] [i_0] = ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) ((var_8) <= (4155323695U)))) : (((/* implicit */int) (signed char)-16)));
                            arr_63 [(signed char)10] [i_15] [i_15] [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((arr_14 [i_16] [i_16] [i_16] [i_16]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6))))))));
                            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0])))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 1) 
            {
                for (unsigned long long int i_20 = 2; i_20 < 16; i_20 += 2) 
                {
                    for (unsigned char i_21 = 2; i_21 < 17; i_21 += 4) 
                    {
                        {
                            arr_74 [i_0] [(unsigned short)7] [i_0] [i_0] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) && (((/* implicit */_Bool) ((arr_64 [i_0] [14U] [i_0] [i_20]) ? (((/* implicit */int) var_12)) : (2))))));
                            var_35 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) arr_56 [(signed char)17] [i_21])))) ? ((~(5))) : ((-(((/* implicit */int) var_4))))));
                            arr_75 [i_20 + 2] [i_19] = ((/* implicit */short) ((2685715521973526881ULL) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)127)))))));
                            arr_76 [i_19] = ((/* implicit */int) ((unsigned char) (_Bool)1));
                            var_36 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_24 [i_19] [i_19] [i_20 - 2])) : (arr_71 [i_19] [i_0] [i_19])));
                        }
                    } 
                } 
            } 
            arr_77 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_15])) && (((/* implicit */_Bool) arr_73 [i_0] [i_0] [(signed char)4] [(signed char)4] [i_0] [i_0] [(_Bool)1]))));
        }
        for (short i_22 = 0; i_22 < 20; i_22 += 2) /* same iter space */
        {
            arr_81 [i_0] [(_Bool)1] [i_22] = (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_15 [i_0] [i_0])) >= (arr_67 [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_14)))) : ((+(7894790632414150927LL)))))));
            var_37 = ((/* implicit */int) arr_2 [i_0] [i_0]);
        }
        var_38 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
        arr_82 [i_0] = ((/* implicit */signed char) (~((~(2)))));
    }
}
