/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1817
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
    var_15 *= ((/* implicit */signed char) 2147483647);
    var_16 = ((/* implicit */signed char) 1980056089);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    var_17 *= ((/* implicit */unsigned int) (signed char)-2);
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            arr_14 [i_0] [0] [23] [(signed char)14] [i_2] [i_4] = ((/* implicit */unsigned short) 13913337431640785238ULL);
                            arr_15 [i_0] [i_2] = ((/* implicit */int) (unsigned char)132);
                            arr_16 [(_Bool)1] [i_2] [i_2] [i_3] [(_Bool)1] = (_Bool)1;
                            var_18 = ((/* implicit */int) (signed char)-94);
                        }
                        arr_17 [i_0] [i_3] [(signed char)20] [i_2] = ((/* implicit */_Bool) (signed char)-18);
                        arr_18 [i_2] [i_2] [i_3] = (_Bool)0;
                    }
                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 21; i_5 += 1) 
                    {
                        arr_21 [i_2] [i_0] = ((/* implicit */unsigned short) ((-1177536334) <= (((/* implicit */int) (_Bool)1))));
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (signed char)2))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            arr_26 [5] [i_2] = ((/* implicit */unsigned long long int) (signed char)62);
                            arr_27 [i_7] [i_6] [(signed char)18] [i_2] = ((/* implicit */signed char) (short)31823);
                            arr_28 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) & (-1LL)))) || (((/* implicit */_Bool) (short)(-32767 - 1))));
                            arr_29 [i_0] [(unsigned short)11] [i_2] [i_2] [i_7] = ((/* implicit */int) (signed char)18);
                            var_20 *= (signed char)-48;
                        }
                        for (signed char i_8 = 2; i_8 < 23; i_8 += 2) 
                        {
                            var_21 *= ((/* implicit */unsigned long long int) -23LL);
                            arr_32 [i_0] [i_2] [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */int) (unsigned char)139);
                        }
                        for (unsigned short i_9 = 3; i_9 < 20; i_9 += 1) 
                        {
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (unsigned char)107))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) == (((/* implicit */int) (unsigned short)65535))))) - (((/* implicit */int) (signed char)-79)))))));
                        }
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65529)) + (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned char)130))))));
                        arr_36 [i_2] [i_1] [i_2] = (signed char)87;
                        arr_37 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (unsigned char)253);
                    }
                }
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((17639696795520663483ULL) << (((/* implicit */int) (_Bool)1))))) || (((((/* implicit */_Bool) 18446744073709551593ULL)) && (((/* implicit */_Bool) (signed char)-9))))))) + (((((/* implicit */int) (signed char)24)) | (((/* implicit */int) (short)32756))))));
                    arr_40 [(signed char)12] [i_1] [5] = ((/* implicit */long long int) (short)-32757);
                }
                /* vectorizable */
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (unsigned short)65532))));
                    var_27 = ((/* implicit */_Bool) (signed char)-95);
                }
                /* LoopSeq 2 */
                for (unsigned char i_12 = 4; i_12 < 21; i_12 += 2) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-15)) + (2147483647))) >> (((((-1707972033) % (((((/* implicit */int) (unsigned char)91)) ^ (((/* implicit */int) (signed char)50)))))) + (63)))));
                    var_29 = -1911945804;
                }
                for (unsigned char i_13 = 4; i_13 < 21; i_13 += 2) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)2))));
                    var_31 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-9))))) == (6156179890440280753LL)));
                }
                var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-59))) > (9471929907839164169ULL)));
                /* LoopSeq 1 */
                for (signed char i_14 = 0; i_14 < 24; i_14 += 2) 
                {
                    arr_50 [14LL] [i_1] [i_14] [(signed char)13] = ((/* implicit */int) (_Bool)1);
                    var_33 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)6)) + (((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) ((1581243590) / (((/* implicit */int) (signed char)24))))))))));
                }
                arr_51 [4U] [(_Bool)1] [i_1] = ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 8974814165870387447ULL))));
            }
        } 
    } 
}
