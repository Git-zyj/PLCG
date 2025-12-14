/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148323
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_16 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) != (14927485917645442931ULL)))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0]))) : (3519258156064108675ULL)))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (((-(((/* implicit */int) arr_1 [i_0])))) ^ (((/* implicit */int) var_5)))))));
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))))))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) ((((long long int) (signed char)5)) != (((/* implicit */long long int) var_14))))) > (((/* implicit */int) ((((/* implicit */_Bool) 14927485917645442920ULL)) || (((/* implicit */_Bool) 67553994410557440ULL))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (signed char i_3 = 1; i_3 < 19; i_3 += 4) 
            {
                {
                    arr_13 [i_3] &= ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) ((unsigned long long int) (signed char)-1))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_2])))))))));
                    var_20 = ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) var_2)) ? (arr_10 [i_1] [i_1] [i_3]) : (((/* implicit */unsigned long long int) -1264070667)))))) < (arr_6 [i_1])));
                    var_21 &= ((/* implicit */unsigned int) (-(3519258156064108696ULL)));
                    var_22 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))));
                }
            } 
        } 
        var_23 -= min((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)29))) : (((2305807824841605120ULL) * (arr_10 [i_1] [i_1] [i_1]))))), (((/* implicit */unsigned long long int) (signed char)-43)));
        arr_14 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_7)) + ((+(((var_1) / (((/* implicit */unsigned long long int) -1264070660))))))));
    }
    var_24 = ((/* implicit */signed char) (+(var_15)));
    var_25 |= ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
    var_26 = ((/* implicit */unsigned long long int) var_14);
    var_27 |= ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_13)))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((_Bool)1), (var_11))))))) : (((((/* implicit */_Bool) 3519258156064108717ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-48))) : (16140936248867946496ULL))));
}
