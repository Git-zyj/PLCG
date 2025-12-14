/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150733
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)2833)) ? (3422121901U) : (var_9))) << (((((unsigned int) var_14)) - (2237034876U)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((var_6), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) == (var_0)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] = ((/* implicit */long long int) -1297417775);
                                arr_15 [i_4] [i_1] [i_2] [i_1] [i_0] |= ((/* implicit */_Bool) max(((((_Bool)1) ? ((+(752245206U))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) -4039629112131746246LL)) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)19)))))));
                                arr_16 [i_2] [i_1] [i_2 + 1] [i_3 - 1] [i_4] [i_0] [i_2 + 1] = ((/* implicit */signed char) ((5434182355677655837LL) > ((~(max((((/* implicit */long long int) var_5)), (var_2)))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 + 1]))) ^ (((arr_1 [i_2 + 1]) ? (var_9) : (((/* implicit */unsigned int) var_1)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 1; i_5 < 9; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                {
                    arr_26 [i_5 + 1] [i_5] [i_7] = ((/* implicit */short) ((unsigned char) ((((_Bool) 5434182355677655852LL)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-109))) : (7304870118050549719ULL))) : (((/* implicit */unsigned long long int) var_3)))));
                    arr_27 [i_7] [i_7] = ((/* implicit */unsigned char) max((max((var_7), (((/* implicit */unsigned int) 1456012571)))), (((/* implicit */unsigned int) (+((~(((/* implicit */int) (signed char)-89)))))))));
                    arr_28 [i_5] [10U] &= ((/* implicit */int) -1327696664474787609LL);
                    arr_29 [0] [i_5] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [2LL])) * (((/* implicit */int) (signed char)-90))))) ? (arr_23 [i_7] [i_6] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)94)))))) == (var_10)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_10) ^ (4814821627566454267LL)))))))) : (((((((/* implicit */_Bool) (unsigned short)31812)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)94))) : (var_14))) + (var_7)))));
}
