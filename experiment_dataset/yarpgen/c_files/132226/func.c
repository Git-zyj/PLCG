/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132226
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_3), (var_7)))) ? (((long long int) 3U)) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
    var_19 = ((/* implicit */int) var_7);
    var_20 = ((/* implicit */unsigned long long int) var_15);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 8; i_0 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) var_8);
            /* LoopSeq 2 */
            for (signed char i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)1656)) : (((/* implicit */int) arr_4 [i_0 - 1] [i_1]))));
                var_23 = ((/* implicit */unsigned int) var_17);
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_24 = ((/* implicit */unsigned short) ((_Bool) arr_6 [i_0 + 3] [i_1] [i_1]));
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (arr_2 [i_0 + 3]) : (((/* implicit */long long int) ((/* implicit */int) (short)29525)))));
                var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((10375035125875152297ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3))))))));
            }
            var_27 = ((/* implicit */unsigned short) var_5);
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 2; i_5 < 8; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        {
                            var_28 = ((_Bool) (short)32764);
                            var_29 &= ((/* implicit */unsigned int) (signed char)108);
                            var_30 = var_17;
                            var_31 = ((/* implicit */signed char) arr_14 [i_0] [i_5] [i_6] [3U]);
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */unsigned int) ((_Bool) (~(max((((/* implicit */unsigned int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_15 [i_0] [i_0] [i_0]))))));
            var_33 *= min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65523))) & (max((var_16), (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0 - 3] [i_4 - 1] [i_4])) - (((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) arr_19 [i_0] [i_0] [3U] [i_4 - 1] [i_4])) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_4] [(short)8] [i_0]))))))));
        }
        for (short i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    {
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))));
                        var_35 = ((/* implicit */unsigned int) min(((~(((((/* implicit */long long int) var_7)) - (var_4))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0 - 2] [i_0 - 3])) ? (((((/* implicit */_Bool) 125829120U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)113)) || (((/* implicit */_Bool) arr_15 [i_0 - 1] [i_0] [i_10]))))))))));
                    }
                } 
            } 
            var_36 &= ((var_12) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) 8071708947834399344ULL))))))) : (((/* implicit */int) arr_19 [i_0] [(signed char)6] [i_0] [i_0] [i_0 + 2])));
            var_37 *= ((/* implicit */unsigned char) arr_0 [2LL] [i_0 - 3]);
            var_38 = ((/* implicit */signed char) arr_24 [i_0] [(_Bool)1] [i_8]);
        }
        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 1) 
        {
            arr_34 [1] [i_0] = ((/* implicit */unsigned int) ((arr_29 [i_0 + 2] [i_11] [i_0] [i_11]) < (((/* implicit */long long int) max((((/* implicit */unsigned int) ((-342295815) != (((/* implicit */int) (_Bool)0))))), ((-(var_6))))))));
            var_39 &= ((/* implicit */unsigned short) arr_29 [7] [7] [i_0 - 1] [i_11]);
        }
        var_40 = ((/* implicit */unsigned long long int) var_3);
        arr_35 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)80)) ? (1606937427) : (((/* implicit */int) (unsigned char)215))))), (max((((/* implicit */long long int) arr_25 [i_0])), (arr_2 [i_0 - 3])))));
        arr_36 [i_0] = ((/* implicit */signed char) (unsigned short)59106);
    }
}
