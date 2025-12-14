/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181983
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_16 = min((((/* implicit */long long int) ((unsigned short) arr_1 [i_0 + 1]))), (arr_0 [i_0] [i_0]));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11556))) : (min((((((/* implicit */_Bool) var_15)) ? (arr_1 [i_0]) : (18014398509481983ULL))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 + 1]))))));
        var_18 = min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_0 [i_0] [i_0]))))), (((((/* implicit */_Bool) ((long long int) arr_1 [5]))) ? (((((/* implicit */_Bool) (short)-11556)) ? (4095ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11556))))) : (((/* implicit */unsigned long long int) min((arr_0 [i_0] [(short)20]), (arr_0 [i_0] [i_0 + 1])))))));
    }
    for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [8ULL] [i_1])) | (((((((/* implicit */_Bool) var_14)) ? (17870283321406128128ULL) : (((/* implicit */unsigned long long int) var_15)))) | (((/* implicit */unsigned long long int) var_12))))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((_Bool) var_6)) ? ((~(arr_0 [(_Bool)1] [i_1]))) : (((/* implicit */long long int) (-(((/* implicit */int) (short)11555)))))))) && (((/* implicit */_Bool) ((unsigned char) max((arr_1 [(_Bool)1]), (((/* implicit */unsigned long long int) 423516086U))))))));
        arr_4 [i_1] = ((/* implicit */unsigned short) arr_2 [2ULL] [i_1]);
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) max((min((arr_2 [(_Bool)1] [(_Bool)1]), (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((unsigned char) ((int) (_Bool)1))))));
        /* LoopSeq 2 */
        for (long long int i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            var_21 = (+(4677811850079424677ULL));
            arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_2])) ? (min((min((6831066069791884406ULL), (((/* implicit */unsigned long long int) arr_6 [i_2])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_2]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) && ((_Bool)1)))))));
            arr_13 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((((/* implicit */_Bool) arr_1 [i_3])) && (((/* implicit */_Bool) (short)11555))))))) | (((/* implicit */int) (short)-11559))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((((/* implicit */int) var_1)), (436681105))), (((/* implicit */int) arr_9 [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) min(((~(-4))), (((/* implicit */int) min((arr_5 [(_Bool)1] [i_3]), (((/* implicit */unsigned short) var_5)))))))) : (min((((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned short) arr_6 [i_2]))))), (min((6831066069791884406ULL), (((/* implicit */unsigned long long int) -15))))))));
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            var_23 = ((/* implicit */short) (~(((/* implicit */int) ((arr_2 [14] [14LL]) >= (((/* implicit */int) var_13)))))));
            var_24 = ((/* implicit */signed char) var_9);
            var_25 = ((/* implicit */_Bool) ((int) (unsigned short)20052));
        }
        var_26 = ((/* implicit */short) 4);
    }
    var_27 = ((/* implicit */_Bool) var_8);
}
