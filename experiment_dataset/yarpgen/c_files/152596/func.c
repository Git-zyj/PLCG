/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152596
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) arr_8 [(unsigned char)5])))))) : (arr_1 [i_0 - 2])));
                        var_11 = ((unsigned int) arr_4 [i_0 + 1]);
                    }
                } 
            } 
            var_12 *= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        }
        for (int i_4 = 2; i_4 < 12; i_4 += 4) 
        {
            var_13 &= ((/* implicit */unsigned short) var_1);
            var_14 = arr_11 [i_0];
        }
        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_6 = 3; i_6 < 11; i_6 += 1) 
            {
                for (short i_7 = 1; i_7 < 12; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)223))) : (arr_17 [i_6] [i_6])));
                            var_16 = arr_10 [i_8];
                            var_17 = (!(((/* implicit */_Bool) -2475427280373238610LL)));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)49396)) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49396))))))))));
            var_19 = ((/* implicit */short) arr_7 [i_0] [(short)8] [i_0]);
        }
        /* LoopSeq 2 */
        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 1) 
        {
            var_20 *= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)16139)) | (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_9]))))) + (((arr_19 [i_0] [i_0 + 1] [i_0]) ? (5628426560858470327LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49395)))))));
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) -2475427280373238633LL))) ? (((((/* implicit */_Bool) -2475427280373238603LL)) ? (((/* implicit */int) arr_10 [i_0 - 2])) : (((/* implicit */int) (short)-2980)))) : (((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_0] [i_9] [i_9])) : (((/* implicit */int) var_4))))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) 18007277385778448701ULL))));
            arr_30 [i_0] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18007277385778448688ULL)) ? (3334403068U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            arr_31 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0 - 1])) >= (((/* implicit */int) ((((/* implicit */int) arr_5 [i_10] [i_10] [i_10] [i_0])) > (((/* implicit */int) (_Bool)1)))))));
        }
        var_23 = ((/* implicit */short) (((~(((/* implicit */int) (unsigned char)127)))) != (((/* implicit */int) ((((/* implicit */int) (short)-6692)) >= (((/* implicit */int) (unsigned char)115)))))));
    }
    /* vectorizable */
    for (long long int i_11 = 0; i_11 < 23; i_11 += 4) 
    {
        arr_34 [(signed char)13] = var_6;
        var_24 = ((/* implicit */_Bool) var_1);
        /* LoopNest 2 */
        for (signed char i_12 = 1; i_12 < 20; i_12 += 2) 
        {
            for (unsigned char i_13 = 1; i_13 < 21; i_13 += 1) 
            {
                {
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */int) arr_38 [i_13 + 1] [i_13] [i_11] [i_13])) & (((/* implicit */int) arr_38 [i_13 + 1] [i_13] [i_11] [i_13])))))));
                    var_26 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_38 [i_12 + 3] [i_13 - 1] [i_12] [i_13])) : (((/* implicit */int) (unsigned short)62641))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_14 = 3; i_14 < 22; i_14 += 2) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 4) 
                {
                    {
                        arr_47 [i_14] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_35 [i_14 - 3])) & (((/* implicit */int) (_Bool)1))));
                        var_27 = ((/* implicit */_Bool) arr_39 [i_15] [i_16]);
                        /* LoopSeq 1 */
                        for (unsigned short i_17 = 3; i_17 < 20; i_17 += 1) 
                        {
                            arr_50 [i_15] [i_15] [(signed char)18] = ((/* implicit */unsigned int) ((arr_32 [i_14 - 3]) ? (((/* implicit */int) arr_32 [i_14 - 2])) : (((/* implicit */int) arr_32 [i_14 - 3]))));
                            var_28 += ((/* implicit */short) (-(((/* implicit */int) arr_45 [i_11] [i_14 - 2] [(signed char)9] [i_17 - 1] [i_16] [i_17 - 1]))));
                            arr_51 [i_15] = (+(((/* implicit */int) arr_38 [i_11] [i_14] [i_15] [i_17 + 1])));
                            var_29 = ((/* implicit */unsigned long long int) arr_35 [i_17]);
                        }
                        var_30 ^= ((/* implicit */int) -2340487441431446356LL);
                    }
                } 
            } 
        } 
        arr_52 [i_11] = ((/* implicit */unsigned long long int) arr_32 [i_11]);
    }
    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((((/* implicit */int) var_4)), (-1265371818))) / (((/* implicit */int) max(((unsigned short)19856), (((/* implicit */unsigned short) var_6)))))))) ? (((/* implicit */int) var_1)) : (((var_9) ? (var_0) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (var_0))))))))));
}
