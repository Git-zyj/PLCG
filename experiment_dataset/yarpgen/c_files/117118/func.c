/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117118
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
    var_19 = ((/* implicit */short) ((((((((/* implicit */int) (unsigned short)49966)) | (var_2))) + (2147483647))) << (max((((/* implicit */int) var_3)), (((var_17) + (((/* implicit */int) (unsigned short)36218))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)15569))))))))) | ((-(14743224420433286568ULL))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) && (min(((_Bool)0), ((_Bool)0)))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)49969)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4676685452203800609ULL))))) : (((/* implicit */int) (unsigned short)49984))));
        var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_0] [(unsigned short)19]), (min(((unsigned short)12954), (arr_1 [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15551)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)15578))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0])))));
        arr_4 [i_0] = max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) ((short) var_5))));
    }
    for (unsigned short i_1 = 2; i_1 < 10; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((((max(((_Bool)1), ((_Bool)1))) && ((!(((/* implicit */_Bool) 63)))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) 14743224420433286568ULL)))) ? (-2081941661) : (((/* implicit */int) (unsigned short)49964)))))));
        var_22 ^= ((/* implicit */short) var_18);
        var_23 += ((/* implicit */unsigned short) (-(min((((/* implicit */int) min((arr_0 [i_1] [i_1 + 1]), (((/* implicit */unsigned short) var_11))))), ((-(((/* implicit */int) arr_0 [i_1] [i_1]))))))));
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) max((((((/* implicit */int) (short)-21490)) * ((-(((/* implicit */int) var_1)))))), (min((((/* implicit */int) min((((/* implicit */unsigned short) (short)22587)), ((unsigned short)49966)))), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))))));
    }
}
