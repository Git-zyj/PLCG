/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172300
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
    var_19 = ((/* implicit */unsigned short) min((3247942654230619354LL), ((~(((((/* implicit */_Bool) var_17)) ? (9223370937343148032LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
    var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_15)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_16)), (10750720395227011934ULL)))))))) : (var_10)));
    var_21 &= ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (-(((/* implicit */int) ((3247942654230619358LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_4 + 3])) == (((/* implicit */int) var_0))))), (arr_9 [i_4 + 3])))) == ((~(((/* implicit */int) arr_0 [i_4 + 4]))))));
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((13605871387601805888ULL), (var_6)))) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) (signed char)-32))))) && (((((/* implicit */_Bool) ((short) var_7))) || ((!(((/* implicit */_Bool) -8786264169326869006LL))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_5 = 4; i_5 < 13; i_5 += 1) 
                {
                    var_24 ^= ((/* implicit */short) -9223370937343148055LL);
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (+(((/* implicit */int) arr_5 [i_5 - 2] [i_1] [i_5])))))));
                    var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_5 - 3] [i_5 - 2] [i_5 + 1]))));
                }
            }
        } 
    } 
}
