/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135425
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
    var_15 -= ((/* implicit */unsigned short) var_10);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(2086077761)))) ? (((/* implicit */unsigned int) ((int) (unsigned short)9))) : (1873435212U)));
                    arr_11 [i_1] [i_0] [i_0] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9175))) : (16868515080680264786ULL)))));
                    var_17 ^= ((/* implicit */short) ((((_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) (!(((/* implicit */_Bool) 2199023255552LL)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (-(((((/* implicit */_Bool) 4632190758847968170ULL)) ? ((-(0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)81)) ? (-2199023255552LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))))));
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23)) ? (-1587834464) : (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) 0)) ? (-1) : (((/* implicit */int) (unsigned short)3)))) : ((+(((/* implicit */int) (signed char)(-127 - 1))))))))));
                            }
                        } 
                    } 
                    var_20 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28607)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)32759))))) ? (((((/* implicit */_Bool) -1719576904)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-56))) : (7120570934243169033ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) var_4);
    var_22 = ((/* implicit */unsigned short) var_1);
}
