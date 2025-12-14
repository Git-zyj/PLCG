/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164286
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_6))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) var_7)) != (var_10))))))) ? (var_7) : (((/* implicit */int) ((((var_7) + (((/* implicit */int) var_0)))) > (((((/* implicit */_Bool) 2251799809490944ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)38576)))))))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2305843009213693951ULL)) ? (12271033491763166018ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26959)))))) ? (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_8)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (var_7)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) | (var_9)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))) : (min((((/* implicit */unsigned int) var_7)), (var_1)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 += ((/* implicit */unsigned int) max(((+(var_10))), (((/* implicit */long long int) (+((-(((/* implicit */int) (short)3154)))))))));
        arr_4 [i_0] = ((/* implicit */signed char) (+(min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [(short)4]))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_11 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)38574)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_9 [i_2] [i_2]))))) : (max((((/* implicit */long long int) (short)0)), (var_10)))))));
                    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28287)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) ((arr_2 [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_1] [i_1]))) : (arr_5 [i_0] [i_1] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) : (((arr_5 [i_0] [i_1] [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [i_2]))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57635))) - (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                    var_17 = ((/* implicit */long long int) (signed char)-6);
                    var_18 |= (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)127))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5067)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) ? (((arr_3 [i_0]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)0))))));
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) max((arr_0 [i_0]), (var_6))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_0] [10] [i_0] [i_0])) ? (arr_7 [i_0] [i_0]) : (((/* implicit */unsigned int) var_7)))) < (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) : (((/* implicit */int) var_0)));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_14 [i_3] = ((/* implicit */signed char) max((((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_3] [i_3])) && (((/* implicit */_Bool) var_10))))), (min((((/* implicit */unsigned int) var_2)), (var_1)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_3])) ? (((/* implicit */long long int) arr_7 [i_3] [i_3])) : (var_9))) : (min((var_9), (((/* implicit */long long int) arr_8 [3] [i_3] [i_3] [i_3]))))))));
        arr_15 [i_3] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_3]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) var_8))))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) var_5)) ? (-443803757) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)88))) >= (var_4))))))) : (var_9));
    }
}
