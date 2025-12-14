/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142209
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 134217664)) & (((((/* implicit */_Bool) (short)29863)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-21))) : (-1855743645659389657LL)))))) ? (-1) : (((int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) 67108863ULL);
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11734271041299341436ULL)));
                                var_18 = ((/* implicit */_Bool) ((((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)30065)))) == (((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) (unsigned char)168)) ? (-6475734537845796726LL) : (((/* implicit */long long int) 1905724867)))) : (((/* implicit */long long int) -1875937307))));
                                var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_1 [i_4])))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28275))) : (((((/* implicit */_Bool) 2970467948U)) ? (13610187132608341139ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) -527557187)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), ((_Bool)1))))) : (11867408578035920447ULL))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-116)) ? (14540793985248972566ULL) : (367681854713098863ULL)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))) | (9223372036854775799LL))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4201645766806573231LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3538149813U))))) : ((-(((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) (short)17710)) : (((/* implicit */int) max((var_13), (((/* implicit */unsigned short) var_0)))))))) : (((unsigned long long int) (_Bool)1))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (+(0LL))))) ? (11263045210651092170ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
}
