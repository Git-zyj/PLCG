/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110464
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
    var_13 += ((/* implicit */signed char) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_14 = (unsigned short)39313;
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_15 += ((/* implicit */unsigned short) min((min((((arr_7 [i_0] [(signed char)7] [i_3]) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (unsigned short)39313)))), (((/* implicit */int) ((((/* implicit */int) (signed char)-121)) < (((/* implicit */int) (_Bool)1))))))), (min((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)26434)) : (((/* implicit */int) (signed char)1)))), (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))));
                            arr_9 [i_0] [(unsigned short)1] [(unsigned short)1] [i_2] [i_3] = ((/* implicit */signed char) (unsigned short)58064);
                            arr_10 [i_0] [i_0] [(unsigned short)4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-80)) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_2] [(unsigned short)11])) : (((/* implicit */int) (signed char)-76))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)2] [(_Bool)1])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-105)))))) : (max((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [(signed char)5] [i_2] [i_2] [i_3])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) (unsigned short)49738)))), (((((/* implicit */_Bool) arr_0 [(signed char)5] [i_2])) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (signed char)-121))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
