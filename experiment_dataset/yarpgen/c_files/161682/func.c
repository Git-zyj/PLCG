/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161682
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
    var_13 = ((/* implicit */long long int) (~(((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) << (((max((((/* implicit */unsigned int) (unsigned char)31)), (var_5))) - (2029080221U)))))));
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) 8464734318908943168ULL))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)152)))));
        var_16 = ((/* implicit */long long int) min((var_16), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(0LL)))) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned char)30))))))) : (var_8)));
        arr_7 [i_1] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((arr_5 [i_1] [i_1]) << (((((/* implicit */int) var_11)) - (13089))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)63371), (((/* implicit */unsigned short) (short)-2)))))))));
        var_17 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12815)))))), (arr_1 [i_1] [i_1]))), (((/* implicit */long long int) ((int) 12548592119624238791ULL)))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (unsigned int i_3 = 4; i_3 < 18; i_3 += 3) 
            {
                {
                    var_18 ^= ((/* implicit */_Bool) ((((unsigned long long int) 209985052)) / (9982009754800608447ULL)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        arr_15 [i_1] [i_1] = arr_12 [i_1] [i_2] [i_3] [i_2] [i_4];
                        var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3 - 4])))))) % (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_1)))) : ((~(arr_9 [13ULL] [i_2])))))));
                        var_20 = ((/* implicit */long long int) max((((((/* implicit */int) (unsigned short)52721)) > ((+(((/* implicit */int) (_Bool)1)))))), (var_6)));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (unsigned short)25924))));
                        var_22 = ((/* implicit */unsigned long long int) arr_16 [i_1] [i_2] [i_2] [i_3]);
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 3; i_6 < 18; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((arr_12 [i_6] [i_5] [i_3 - 4] [i_2] [i_1]) + (((/* implicit */long long int) 15U))));
                            var_24 = ((/* implicit */unsigned int) var_1);
                            var_25 = (~(-3332580588095974879LL));
                        }
                        for (unsigned long long int i_7 = 2; i_7 < 17; i_7 += 3) 
                        {
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) arr_20 [i_7] [i_5] [i_5] [i_3 + 1] [i_2] [i_1] [i_1]))));
                            var_27 = ((/* implicit */unsigned int) ((signed char) var_12));
                        }
                    }
                }
            } 
        } 
    }
}
