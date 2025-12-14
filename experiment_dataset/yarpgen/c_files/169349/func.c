/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169349
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
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            var_14 -= ((/* implicit */int) min((((unsigned long long int) min((((/* implicit */int) var_13)), (var_7)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -315701986754171391LL)) ? (-1697873790) : (((/* implicit */int) (unsigned short)49582)))))));
            arr_6 [i_1] [i_0] [(unsigned short)3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)45840)) ? (283726776524341248ULL) : (((/* implicit */unsigned long long int) -4523521250835211129LL))));
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_1 [i_0 - 3])))))));
        }
        var_16 = ((/* implicit */short) ((max((((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (3471652469127272789LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6221))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)6205)))) != ((+(((/* implicit */int) (unsigned short)49595))))))))));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) arr_2 [i_0 + 1])))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))))))));
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 7; i_2 += 1) 
    {
        arr_9 [(signed char)6] = ((/* implicit */unsigned short) var_4);
        arr_10 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (arr_1 [i_2 + 2]) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))))));
    }
    var_18 = ((signed char) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            {
                var_19 = (signed char)-19;
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)13569))) : (-20LL)))))) ? (((/* implicit */int) (unsigned short)49581)) : (((/* implicit */int) min((max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)6221))), (((/* implicit */unsigned short) var_12)))))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) (unsigned char)220))));
            }
        } 
    } 
    var_22 = var_9;
    var_23 = var_0;
}
