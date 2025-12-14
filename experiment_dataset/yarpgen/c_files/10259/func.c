/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10259
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
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned char)148), (arr_0 [i_0 - 1])))) ? (((/* implicit */int) ((((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19))))) == (max((arr_1 [i_0 + 1] [6]), (((/* implicit */unsigned long long int) (unsigned short)7898))))))) : (((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (unsigned short)59287)) : (((/* implicit */int) (unsigned short)58491))))));
        arr_3 [i_0] = ((/* implicit */long long int) (~((~(((/* implicit */int) var_10))))));
        var_14 += ((/* implicit */signed char) ((((((/* implicit */int) var_2)) * ((+(-1584091954))))) != (((/* implicit */int) arr_0 [i_0]))));
        var_15 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 2])))) ? (var_8) : (((((/* implicit */_Bool) max(((unsigned char)137), ((unsigned char)3)))) ? (((/* implicit */int) arr_0 [i_0])) : ((-(((/* implicit */int) arr_0 [(signed char)1]))))))));
        arr_4 [i_0 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0 + 2]), (((/* implicit */unsigned long long int) (signed char)-35))))) ? (((arr_1 [(signed char)6] [i_0 - 2]) & (arr_1 [i_0] [i_0 + 2]))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2])) ? (arr_1 [i_0 + 2] [i_0 - 2]) : (arr_1 [i_0] [i_0 + 1])))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_16 += (+(((/* implicit */int) arr_7 [i_1] [(_Bool)1])));
            arr_9 [i_1] [i_1] [i_2] = ((/* implicit */int) var_0);
        }
        var_17 += ((/* implicit */short) arr_6 [i_1] [(unsigned char)1]);
        arr_10 [7ULL] = ((/* implicit */unsigned int) (-(max((((long long int) arr_6 [i_1] [(short)7])), (((/* implicit */long long int) ((((/* implicit */int) (signed char)120)) != (((/* implicit */int) (_Bool)1)))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_18 |= (-(min((((/* implicit */unsigned long long int) max((7196898072255814138LL), (((/* implicit */long long int) 2147483643))))), (min((var_12), (((/* implicit */unsigned long long int) (_Bool)1)))))));
        var_19 = ((/* implicit */long long int) arr_12 [i_3]);
        var_20 += ((/* implicit */_Bool) max((max((var_8), (((/* implicit */int) arr_12 [i_3])))), (((/* implicit */int) ((short) arr_12 [i_3])))));
    }
    var_21 = ((/* implicit */unsigned char) var_8);
    var_22 = ((/* implicit */long long int) ((unsigned char) -5410308498716643546LL));
}
