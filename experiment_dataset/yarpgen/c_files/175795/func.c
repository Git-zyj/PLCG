/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175795
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
    var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) (short)-460)))));
    var_20 *= ((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) var_11)), (((long long int) var_1))))));
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((var_5), (((/* implicit */unsigned int) ((signed char) (-(1025343370413111639LL))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_22 &= ((/* implicit */unsigned char) min((((/* implicit */long long int) (signed char)-1)), (1025343370413111639LL)));
                                arr_11 [i_4 - 1] [i_0] [(unsigned char)3] [i_2] [i_2] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) ((-1025343370413111640LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) min(((unsigned short)47322), (((/* implicit */unsigned short) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 5879041831202097804ULL)) ? (1025343370413111649LL) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)65533))))))) % (((unsigned long long int) 3520940414U)));
                }
                /* LoopSeq 1 */
                for (int i_5 = 1; i_5 < 22; i_5 += 4) 
                {
                    var_23 = ((/* implicit */_Bool) min((var_23), (((_Bool) max((((/* implicit */unsigned short) (unsigned char)33)), ((unsigned short)65533))))));
                    var_24 = ((/* implicit */_Bool) ((unsigned short) (unsigned short)0));
                    arr_16 [i_0 + 1] [i_0] = ((unsigned char) ((unsigned int) var_10));
                    arr_17 [i_5 - 1] [i_5 - 1] [i_0] = ((/* implicit */signed char) (~(min((774026881U), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65535)))))))));
                }
                var_25 -= (_Bool)0;
            }
        } 
    } 
    var_26 = ((((unsigned int) var_0)) & (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-25632))))));
}
