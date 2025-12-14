/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15508
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1])) : (((/* implicit */int) var_8))))) - (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (15278593498329188135ULL)))))) ? (((((/* implicit */unsigned long long int) 5234038455860284884LL)) - (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1])))))) : (((/* implicit */unsigned long long int) ((((-5234038455860284883LL) + (5234038455860284884LL))) + (arr_4 [i_0] [i_0] [i_0]))))));
                            var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) -1522501326)) : (arr_0 [i_1] [i_2]))) * (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned long long int) 753727164U)) : (840037893732831721ULL))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */int) var_10);
                var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (var_10)))) ^ (((/* implicit */int) ((unsigned char) ((signed char) var_6))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_4 = 1; i_4 < 19; i_4 += 1) 
    {
        arr_14 [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_4 - 1])) ? (arr_13 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        arr_15 [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((arr_13 [i_4]) ^ (17606706179976719921ULL)))) ? (((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4]))) : (-5234038455860284883LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) ^ (arr_11 [i_4])));
        /* LoopNest 2 */
        for (long long int i_5 = 1; i_5 < 17; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                {
                    var_18 += ((/* implicit */_Bool) arr_19 [i_4]);
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) max((((17606706179976719936ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) var_5))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_17 [i_6]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_17 [i_4])) : (((/* implicit */int) var_12))))) : ((+(840037893732831728ULL))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1880620484428453131LL)))))))))))));
                    arr_23 [i_4 + 1] [i_5] [i_6] [i_5] = min(((unsigned char)90), ((unsigned char)136));
                    arr_24 [i_5] = ((/* implicit */int) min((((((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4 + 1]))) / (var_1))) / (((/* implicit */long long int) (-(var_4)))))), (((/* implicit */long long int) (+(arr_18 [i_4 + 1]))))));
                    var_20 += ((/* implicit */long long int) arr_12 [i_4 - 1]);
                }
            } 
        } 
        arr_25 [i_4 + 1] = ((/* implicit */long long int) var_12);
        var_21 = ((/* implicit */unsigned long long int) max((var_21), ((-(min((arr_13 [i_4 - 1]), (((/* implicit */unsigned long long int) arr_17 [i_4 + 1]))))))));
    }
    for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) 840037893732831728ULL))));
        /* LoopSeq 1 */
        for (int i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-45)))))));
            var_24 = var_11;
        }
    }
}
