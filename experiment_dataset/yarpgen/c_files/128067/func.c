/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128067
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
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 22; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                            {
                                var_19 = ((/* implicit */signed char) (unsigned short)60013);
                                arr_14 [(short)18] [i_1] [i_0] [i_1] [i_0] = (signed char)-1;
                            }
                            var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) min(((short)-32754), (((/* implicit */short) (_Bool)1))))) > (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)13937)))))))));
                            var_21 |= ((/* implicit */unsigned short) (unsigned char)17);
                            var_22 = (~(((((/* implicit */int) ((unsigned char) (unsigned short)51598))) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51613))))))));
                        }
                    } 
                } 
                var_23 |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)22011)) << (((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned long long int) -1077458706)), (5418616889931156469ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) (unsigned short)65535))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-81))));
}
