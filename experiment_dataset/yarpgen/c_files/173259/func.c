/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173259
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)122)) ? (((((/* implicit */unsigned int) -1187594177)) & (2650866725U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))) ? (((max((((/* implicit */unsigned int) arr_0 [9U])), (1912067280U))) / (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) 510))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_12 = ((/* implicit */int) min((((/* implicit */long long int) ((var_8) - (arr_3 [i_1] [i_2])))), (var_1)));
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0])) <= (-1471411232)));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((var_9), (((/* implicit */unsigned int) arr_0 [i_2])))), (((/* implicit */unsigned int) ((17264532100546017465ULL) <= (((/* implicit */unsigned long long int) arr_0 [i_1])))))))) ? (min((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)55462)), (arr_3 [i_1] [i_0])))), (8876798761603388055ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) max((var_3), (((/* implicit */short) arr_2 [i_0]))))))));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_1 [i_1]), (arr_1 [i_1])))) ? (((/* implicit */int) max((arr_1 [i_1]), (arr_1 [i_1])))) : ((-(((/* implicit */int) (short)32752)))))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [7] [i_1] [(unsigned short)13]))));
                }
            }
        } 
    } 
    var_16 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_1)) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (var_8)))) ? (((((/* implicit */unsigned long long int) 1790894263)) & (14482656557719566258ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
    var_17 = min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)1))))) ? (min((var_2), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) (~(((/* implicit */int) var_0))))))), (max((var_1), (((/* implicit */long long int) ((int) var_4))))));
}
