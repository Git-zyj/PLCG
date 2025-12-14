/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139999
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
    var_20 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */long long int) var_13)) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned char)159))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (2307496830U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) ((long long int) var_3))))))));
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((-7145282688689920533LL) / (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)82)), ((short)-9))))))) + (((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_0)))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((arr_0 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) var_14))))) < (((/* implicit */long long int) ((/* implicit */int) var_15)))))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (short)-4)) + (2147483647))) << (((3094094161U) - (3094094161U)))))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_5 [9U] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((var_7) ^ (arr_0 [i_0])))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6742787683793968973LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-2048))) : (arr_2 [i_0])))) ? (((arr_2 [i_0]) >> (((-5674560490201961440LL) + (5674560490201961442LL))))) : (((((/* implicit */_Bool) 1200873115U)) ? (arr_1 [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))));
            arr_6 [i_0] [i_0] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)156)) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [6LL] [6LL] [i_1])))))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (6742787683793968947LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)38))) : (1916026192U)))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) ((6742787683793968999LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-2063)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)2069))) / (4294967281U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)78)))))))));
        }
    }
    for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) 
    {
        var_23 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) 401451042U)))))))));
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)104)))))));
    }
    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        var_25 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2058))) : (-6742787683793968973LL)))));
        var_26 ^= ((/* implicit */unsigned char) ((max(((!(((/* implicit */_Bool) 1200873131U)))), ((!(((/* implicit */_Bool) var_1)))))) ? (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_8 [9LL])))) ? (((((/* implicit */_Bool) 2793114132U)) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) (unsigned char)97)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)3420)))))))) : ((((!(((/* implicit */_Bool) arr_9 [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-4)) || (((/* implicit */_Bool) (short)25)))))) : (((unsigned int) arr_10 [i_3] [i_3]))))));
    }
}
