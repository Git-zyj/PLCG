/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165840
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? ((~(((/* implicit */int) (unsigned char)197)))) : (max((var_16), (((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) (unsigned short)63357)) ? (576460683583946752LL) : (-576460683583946753LL)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-107)) ? (max((576460683583946752LL), (max((((/* implicit */long long int) (_Bool)1)), (var_1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (-576460683583946753LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [5U]))) : (-576460683583946761LL))) : (((/* implicit */long long int) arr_2 [i_0]))))));
        var_19 = ((/* implicit */_Bool) max((min((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_8))))), (var_5))), (((/* implicit */int) (!((!(((/* implicit */_Bool) 3359278947U)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)31354)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0])) : (arr_2 [i_0])))))) ? (max((max((((/* implicit */long long int) arr_1 [i_0])), (var_10))), (((/* implicit */long long int) var_5)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_13) : (((/* implicit */long long int) arr_0 [i_0]))))));
    }
    /* LoopNest 3 */
    for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        for (int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) arr_12 [i_1] [i_1])) > (max((576460683583946752LL), (((/* implicit */long long int) (signed char)(-127 - 1))))))) ? ((~(897058239))) : (max(((-(((/* implicit */int) arr_1 [i_3])))), (((((/* implicit */_Bool) -576460683583946753LL)) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1))))))));
                    var_21 = ((_Bool) ((long long int) arr_12 [i_1] [i_3 - 1]));
                }
            } 
        } 
    } 
}
