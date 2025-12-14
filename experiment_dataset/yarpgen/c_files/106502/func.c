/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106502
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */long long int) min(((~(((/* implicit */int) var_2)))), (((/* implicit */int) ((12660339296047787148ULL) == (((/* implicit */unsigned long long int) 17179865088LL)))))));
                    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) -17179865094LL)))), (max((arr_4 [i_0] [i_0] [i_1 - 1]), (var_8))))))));
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))) > (max((max((((/* implicit */unsigned int) (_Bool)1)), (var_0))), (((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) 9845666120894468930ULL)))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) 17179865088LL);
    var_14 = ((/* implicit */_Bool) -4007227160664152016LL);
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 4221628342U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))) ? (arr_1 [i_3]) : (((/* implicit */long long int) (~(max((4294967295U), (((/* implicit */unsigned int) var_9)))))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((arr_7 [i_3] [(_Bool)1] [i_3] [i_3]) ? (((/* implicit */int) arr_7 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) var_8))))), (min((arr_5 [i_3] [i_3] [i_3]), (((/* implicit */long long int) var_7))))))) ? (((/* implicit */unsigned long long int) ((((_Bool) (_Bool)1)) ? (((/* implicit */long long int) var_5)) : (min((arr_8 [i_3] [i_3]), (((/* implicit */long long int) 122880U))))))) : (((((unsigned long long int) arr_10 [i_3])) >> (((((14109441719323427614ULL) >> (((/* implicit */int) (_Bool)1)))) - (7054720859661713758ULL)))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_4])) | (((/* implicit */int) arr_13 [i_4] [i_4]))))), (min(((((_Bool)1) ? (73338954U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (var_0))))))));
        arr_14 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_7 [i_4] [i_4] [i_4] [i_4]) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 1944581566519597702LL)) ? (17179865088LL) : (var_4)))))) ? (max((arr_5 [i_4] [i_4] [i_4]), (((/* implicit */long long int) arr_12 [i_4])))) : (((((/* implicit */_Bool) arr_10 [i_4])) ? (262143LL) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (262143LL)))))));
        arr_15 [i_4] = ((/* implicit */unsigned int) 14020873157965091815ULL);
    }
    var_18 = ((/* implicit */_Bool) max((((/* implicit */long long int) (~(3639242609U)))), (-5232512390098476257LL)));
}
