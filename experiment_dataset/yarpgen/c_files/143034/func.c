/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143034
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
    var_16 = ((/* implicit */_Bool) (((((+(((/* implicit */int) (unsigned short)55107)))) <= (((/* implicit */int) var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (-1136323772))))))) : (((/* implicit */int) var_9))));
    var_17 = ((/* implicit */signed char) max((min((min((((/* implicit */unsigned int) (signed char)83)), (1695111521U))), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) (short)32753))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 8; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) max((((/* implicit */unsigned int) var_2)), (4294967295U))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min(((unsigned char)224), (((/* implicit */unsigned char) var_8))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) var_7)))))), ((-(((/* implicit */int) ((9223372036854775807LL) > (((/* implicit */long long int) 14U)))))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (short)-32733));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    arr_10 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)18335)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32755))) : (2290263222U))) - (((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (65535))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 3; i_3 < 7; i_3 += 2) 
                    {
                        var_19 *= max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((short)32742), (((/* implicit */short) (_Bool)1)))))) <= (2004704074U)))), (max(((+(((/* implicit */int) var_14)))), (((((/* implicit */int) var_2)) / (((/* implicit */int) var_1)))))));
                        arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((268435455) >= (((/* implicit */int) (signed char)124))))) + (((/* implicit */int) min((((/* implicit */short) var_10)), (var_6))))));
                        arr_15 [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) 2290263222U));
                    }
                }
                for (int i_4 = 2; i_4 < 9; i_4 += 3) 
                {
                    var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((var_1), (var_11)))), (min((((/* implicit */unsigned int) (_Bool)0)), (2290263203U)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)91)), (var_6))))) <= (((((/* implicit */_Bool) (short)-3714)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_5)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 8; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1028437842955638640ULL)) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) ((signed char) 0U)))));
                                arr_23 [(_Bool)1] [i_1] [i_4] [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((10424088463358438853ULL), (((/* implicit */unsigned long long int) (short)32732)))), (((/* implicit */unsigned long long int) ((unsigned char) 1081328049U)))))) ? (((int) var_2)) : (((/* implicit */int) (unsigned short)42474))));
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) (short)-1))))) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_14)))))));
                                var_22 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_23 -= (~(((/* implicit */int) ((unsigned char) var_5))));
                    arr_24 [i_0] [i_0] [i_4] [i_4] = 0ULL;
                }
            }
        } 
    } 
}
