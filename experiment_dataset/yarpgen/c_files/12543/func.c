/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12543
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (_Bool)1))))))) : ((+(86650454100575113ULL))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-6)) : (((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) 3487332927588997491LL)) ? (4294967280U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 4; i_3 < 20; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 1) 
                    {
                        {
                            arr_12 [i_1] [i_2] [i_3] [i_3] [17LL] = ((/* implicit */unsigned char) ((short) max((((/* implicit */unsigned long long int) arr_9 [i_1])), (arr_7 [i_1]))));
                            var_11 -= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_4] [i_3 - 2] [i_1] [i_1 - 1])) ? (var_2) : (((/* implicit */unsigned long long int) arr_8 [i_4] [i_3] [20LL] [i_1 - 1])))));
                        }
                    } 
                } 
                arr_13 [i_1] [i_1] = ((/* implicit */short) (-((-(((/* implicit */int) (unsigned short)3405))))));
                var_12 &= ((/* implicit */long long int) max((((/* implicit */int) (_Bool)0)), ((+(((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1]))))));
                arr_14 [i_1] [i_1 + 1] [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)141)) ? (11344980348310604697ULL) : (((/* implicit */unsigned long long int) var_5))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_8) : (var_5)))) : (-8446236166483477977LL))) : (((/* implicit */long long int) arr_4 [i_1]))));
            }
        } 
    } 
    var_13 &= ((/* implicit */_Bool) var_6);
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))))) : (min((((0LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32766)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)115))))))))));
}
