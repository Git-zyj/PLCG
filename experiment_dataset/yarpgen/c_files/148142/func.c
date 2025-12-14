/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148142
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */_Bool) (-(((unsigned int) arr_2 [i_0] [i_1 + 1]))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_19 = ((/* implicit */long long int) min(((((_Bool)1) ? (20ULL) : (((/* implicit */unsigned long long int) 1040724542U)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (unsigned short)41526))) >> (((var_6) + (1538390210509691129LL))))))));
                    var_20 = ((/* implicit */_Bool) max((((/* implicit */short) arr_0 [i_0])), ((short)-11296)));
                }
                for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [6LL])) ? (28ULL) : (((/* implicit */unsigned long long int) var_6))))) ? (((((/* implicit */_Bool) (signed char)-79)) ? (5926640272104346090ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1 + 3] [i_0])) || (((/* implicit */_Bool) var_6)))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (2097151U)))), (((arr_14 [i_1 + 1] [i_1] [i_3] [i_4]) % (arr_14 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2])))));
                                var_22 |= ((/* implicit */int) ((((_Bool) -5897360832286308144LL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16576247885108942250ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30075))) : (4036152229U)))) ? (((((/* implicit */_Bool) 2803121620U)) ? (46795663U) : (258815066U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_4 [i_0] [i_1 + 1] [12U])))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)30104))) < (-1586572100223519803LL)))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_23 = ((/* implicit */int) min((min((((/* implicit */unsigned int) -387175637)), (218741729U))), (((/* implicit */unsigned int) 502250451))));
    var_24 = ((/* implicit */long long int) min(((-(1866120056))), (((/* implicit */int) var_8))));
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-57))))) ? (max((-1491961480), (((/* implicit */int) var_12)))) : (((/* implicit */int) var_11))))) ? ((+(max((((/* implicit */long long int) var_3)), (var_6))))) : (((/* implicit */long long int) (-(((var_5) ? (var_10) : (var_1))))))));
}
