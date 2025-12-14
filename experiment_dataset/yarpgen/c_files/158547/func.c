/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158547
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
    var_10 = (-(var_3));
    var_11 = ((/* implicit */unsigned char) ((unsigned int) -4LL));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((var_4) | (((/* implicit */int) var_1))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_13 = ((/* implicit */_Bool) (~(arr_0 [i_0])));
            var_14 += ((/* implicit */unsigned long long int) ((unsigned char) var_0));
            var_15 = (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)51)));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) ((5LL) == (-13LL))))));
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))));
            arr_8 [(_Bool)1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8899980277284310510LL))));
        }
        for (unsigned char i_3 = 2; i_3 < 13; i_3 += 4) 
        {
            var_18 = ((/* implicit */short) var_5);
            arr_13 [i_0] [i_0] = ((((/* implicit */_Bool) 4981988101276068729LL)) ? (var_3) : (4LL));
            var_19 |= (-(2146181825241433541LL));
            arr_14 [i_0] = ((/* implicit */unsigned char) ((((246736383944659845LL) > (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_5 [i_3 + 1])));
        }
    }
    for (unsigned char i_4 = 3; i_4 < 11; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (short i_5 = 2; i_5 < 10; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                {
                    var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) (short)-31778)) ? (-13LL) : (7837714677430031442LL)));
                    arr_26 [i_4] = ((((/* implicit */_Bool) arr_25 [i_4] [10LL] [i_4] [10LL])) ? (((/* implicit */long long int) min((((/* implicit */int) arr_21 [i_5] [i_6])), ((+(((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 13LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13097))) : (2349909792U)))) ? ((-(13LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))))));
                    var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 16646144U)))) ? (((/* implicit */int) ((short) var_9))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)129)))))))) ? (((((/* implicit */_Bool) 8484194646192546611LL)) ? (((/* implicit */int) (unsigned char)138)) : ((~(((/* implicit */int) var_5)))))) : (var_4)));
                    arr_27 [(unsigned char)10] [i_5 - 2] [i_4] = (i_4 % 2 == 0) ? (((/* implicit */_Bool) ((((((/* implicit */_Bool) max((((/* implicit */short) var_0)), ((short)32742)))) ? (((/* implicit */int) ((((/* implicit */_Bool) -7837714677430031443LL)) && (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_2)))) << ((((~(((arr_9 [i_4] [i_4]) & (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) - (4294967272U)))))) : (((/* implicit */_Bool) ((((((/* implicit */_Bool) max((((/* implicit */short) var_0)), ((short)32742)))) ? (((/* implicit */int) ((((/* implicit */_Bool) -7837714677430031443LL)) && (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_2)))) << ((((((~(((arr_9 [i_4] [i_4]) & (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) - (4294967272U))) - (4294967219U))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 246736383944659825LL)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)176))) + (var_9)))) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) | (var_8))))) / (((/* implicit */long long int) (((~(((/* implicit */int) arr_16 [i_4])))) / (((/* implicit */int) var_5)))))));
    }
}
