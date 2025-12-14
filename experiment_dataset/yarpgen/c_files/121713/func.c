/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121713
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
    var_16 = var_11;
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)46);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)49985)))) * (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_1])), (var_11)))) <= (((/* implicit */int) (!((_Bool)1)))))))));
                                arr_14 [i_2] [i_1] [i_2] [i_3] [(short)3] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((arr_6 [i_0] [i_2] [(unsigned short)5]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) + (min((((-3981575127364775353LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-89)))))))));
                                arr_15 [i_0 - 3] [(_Bool)1] [(_Bool)1] [i_2] [(short)12] [i_4] &= max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 1445962151)) : (var_1)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)197)) ? (12385826031773277177ULL) : (((/* implicit */unsigned long long int) -2332011257771996200LL))))))), (max((((((/* implicit */_Bool) (unsigned short)31)) && ((_Bool)1))), (((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
                                arr_16 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_2] = ((/* implicit */unsigned long long int) max((((arr_0 [i_0 - 1]) ? (arr_3 [(_Bool)1] [i_3 - 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31))))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_13 [i_0 + 2] [i_2])) : (((/* implicit */int) arr_13 [i_0 + 2] [i_2])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((unsigned int) var_9));
    var_19 = ((/* implicit */unsigned int) ((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_11))))) != (((((/* implicit */_Bool) (unsigned short)33251)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2332011257771996192LL)))))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)62879)), (var_14)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16835999658907880728ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))) : (var_1)))) ? ((~((~(((/* implicit */int) var_2)))))) : (((/* implicit */int) var_6))));
}
