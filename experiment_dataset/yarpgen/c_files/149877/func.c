/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149877
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
    var_17 &= ((/* implicit */signed char) var_9);
    var_18 = (~(var_1));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? ((~(-923427671))) : (((/* implicit */int) (!(((/* implicit */_Bool) 13698009322039585931ULL)))))))) ? ((~((~(var_4))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_14)))) : (min((((/* implicit */long long int) (short)1)), (var_4)))))));
    var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 13653389559004004274ULL)) ? ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (4265006319438022698LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)25)))))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) (unsigned char)186)) ? (var_6) : (var_6))) : (((/* implicit */unsigned int) var_8)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [12ULL] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */long long int) 1456439192)), (arr_0 [i_1])))) ? (((var_14) - (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned short)19] [i_1] [i_2 + 2]))))) : (((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))) : (var_4)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)-8968))))) : (((/* implicit */int) ((_Bool) var_0))))))));
                    arr_8 [i_0] [i_1] [i_2] [(unsigned char)10] = ((/* implicit */short) max((1220589740065845892ULL), (6401602684938219722ULL)));
                    var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)51472))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)102)))), (var_6)));
                        var_22 = ((/* implicit */long long int) arr_3 [5U] [i_1] [(unsigned short)2]);
                        arr_12 [i_0] [(unsigned char)5] [i_1] [i_1] [i_0] [i_0] = (!((!((_Bool)1))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (1923435833591607184LL))))));
                            arr_15 [i_0] [20] [i_3] [i_4] [i_4] [19LL] [i_4] = var_4;
                            var_24 = ((/* implicit */_Bool) 526324147691250763ULL);
                        }
                        var_25 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_6 [i_2 + 1] [i_0] [i_2 + 1]) && (((/* implicit */_Bool) var_15))))) ^ (((/* implicit */int) ((_Bool) (unsigned char)213)))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 1; i_5 < 23; i_5 += 3) 
                    {
                        arr_20 [i_0] [i_0] [i_2] [i_5] = ((/* implicit */unsigned char) (signed char)-43);
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            var_26 = ((/* implicit */long long int) var_16);
                            var_27 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)25)) & (((((/* implicit */int) var_16)) + (((/* implicit */int) var_2)))))) <= (((/* implicit */int) arr_18 [i_6] [i_2] [i_2] [i_1] [i_0]))));
                            var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [9] [i_2] [i_2] [i_5] [(_Bool)1]))) * (arr_16 [i_0] [i_1] [(signed char)16] [i_5]))))) ? (((unsigned long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3691176103451544960LL))))))));
                        }
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) -1392794013))));
                        arr_26 [i_0] [9] [i_1] [i_1] [i_2 + 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (_Bool)1))));
                    }
                }
            } 
        } 
    } 
}
