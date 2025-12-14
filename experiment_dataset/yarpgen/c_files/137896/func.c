/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137896
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((var_7) << (((((((/* implicit */_Bool) min((var_7), (var_7)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))) : (375588640U))) - (14984U))))))));
    var_12 = ((/* implicit */int) var_7);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) 4114436287U)))) ? (((unsigned int) arr_0 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (~(var_10)))) : (var_7)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 23; i_2 += 3) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned char) var_8);
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_2 [13LL] [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_7 [i_0])))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))), (var_7))))));
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 803295539)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_0] [i_1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (var_3))))))))));
                    arr_11 [i_2] [i_1] [i_0] |= ((/* implicit */unsigned long long int) var_2);
                    var_16 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((arr_0 [i_2 - 3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2 - 3])) ? (((((/* implicit */_Bool) -803295539)) ? (((/* implicit */int) (unsigned short)36247)) : (((/* implicit */int) arr_9 [i_1] [(signed char)17])))) : (((((/* implicit */int) var_4)) - (arr_1 [i_0]))))))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)8135)), (544825384304803385ULL))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_3])) >> (((arr_8 [i_3]) - (4174073654U)))))) > (((((/* implicit */_Bool) 16855811776176951397ULL)) ? (var_7) : (arr_8 [i_3])))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        var_19 = ((/* implicit */int) ((((544825384304803409ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1367677217)) ? (var_10) : (-608611693)))))) ? (((((1590932297532600219ULL) >> (((/* implicit */int) var_2)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) == (((/* implicit */unsigned long long int) var_9)))))))) : (((/* implicit */unsigned long long int) var_8))));
        var_20 += (((!(((/* implicit */_Bool) (-(-2104520807)))))) && (((/* implicit */_Bool) arr_15 [14U])));
        arr_18 [i_4] = arr_7 [i_4];
    }
}
