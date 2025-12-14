/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173505
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        arr_12 [i_1 + 2] [i_1 + 2] [i_0] [(signed char)8] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63067)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))) - ((-(arr_2 [i_0] [i_1 + 1])))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            var_20 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_7 [i_1] [i_1 + 1] [i_1 + 2] [i_4 + 1])), (var_12)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) * (6494197563769438565ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 7190765695743727727LL)))) : (((arr_3 [i_1] [i_2] [i_4 + 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_2] [i_3])))))))) : (17273436699580482772ULL));
                            arr_17 [i_0] [i_3] [(signed char)11] [(signed char)11] [5] [i_0] = ((/* implicit */unsigned long long int) var_5);
                        }
                        for (short i_5 = 1; i_5 < 15; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) -1047243795))) ? (max((15516870886528596387ULL), (((/* implicit */unsigned long long int) (short)-14442)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_13 [i_0] [i_1 + 1] [11] [i_3] [i_5 + 1]))))))) ? ((~(13067261234113241524ULL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)11824))) / (7190765695743727727LL))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2476))))))));
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) 15509447904136218162ULL)) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])) : (((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))))) : (arr_8 [i_1 + 2] [i_0] [i_5 - 1])))));
                            arr_21 [i_3] [i_1 + 1] [i_3] [i_5] [i_5] [i_3] &= max((((int) arr_11 [i_3] [i_3] [i_5 + 1] [i_1])), (((((/* implicit */_Bool) arr_11 [i_3] [i_1] [i_5 - 1] [i_3])) ? (122880) : (((/* implicit */int) arr_11 [i_3] [i_1 - 1] [i_5 - 1] [i_3])))));
                        }
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_0] [i_0] [8LL] [i_0]))))) != (((arr_20 [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))))))) & (max((((/* implicit */long long int) 1914270484)), (9147138986814323789LL)))));
    }
    var_24 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) 1914270487))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (var_5)))))), (((unsigned long long int) min((((/* implicit */long long int) var_11)), (var_2))))));
}
