/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/33
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
    var_18 = ((/* implicit */unsigned short) ((long long int) (+(0U))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */short) (~(arr_3 [i_0] [i_0])));
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */short) ((67041713313974852LL) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 67041713313974848LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12403))) : (-6901575978452397934LL))))))));
                }
            } 
        } 
        arr_9 [i_0] = min((((/* implicit */long long int) ((unsigned int) max((2305843009213693952LL), (((/* implicit */long long int) (unsigned char)90)))))), (((((/* implicit */long long int) ((/* implicit */int) var_13))) - (6901575978452397934LL))));
        var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) -67041713313974853LL)))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (unsigned char)54)))), (((/* implicit */int) (unsigned short)6390))));
                    arr_15 [i_4] [i_4] [i_3] [i_0] |= ((/* implicit */unsigned long long int) 67041713313974876LL);
                    var_22 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)129))) : (2505121068U)))))) ? ((-(((/* implicit */int) (short)-9032)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32757)))))));
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (((-(max((67041713313974852LL), (((/* implicit */long long int) (unsigned char)226)))))) + (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)11985), (((/* implicit */unsigned short) (short)-4))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        arr_20 [i_5] [i_5] = ((/* implicit */long long int) (~(((((/* implicit */int) (short)64)) << (((2499826167U) - (2499826165U)))))));
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4803317285969465181ULL)))))) | (min((2305843009213693954LL), (((/* implicit */long long int) (+(var_1))))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_23 = ((/* implicit */short) (((+((+(4294967281U))))) < (((/* implicit */unsigned int) (+(((/* implicit */int) arr_22 [i_6] [i_6])))))));
        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-28171))));
        var_25 = ((/* implicit */_Bool) arr_0 [i_6]);
        var_26 -= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)18762))) <= (6320883135423374733ULL)))) - (((/* implicit */int) arr_4 [i_6] [i_6] [i_6])))));
    }
    for (unsigned int i_7 = 1; i_7 < 10; i_7 += 3) 
    {
        var_27 = ((/* implicit */short) ((long long int) max((((/* implicit */int) min((((/* implicit */short) var_5)), (arr_11 [i_7] [i_7])))), (((((/* implicit */int) var_2)) - (((/* implicit */int) (_Bool)1)))))));
        var_28 = ((/* implicit */short) min((((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */short) (unsigned char)75)), (arr_22 [i_7] [i_7]))))))), (max((((var_13) ? (-6901575978452397963LL) : (0LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-4253)) ? (((/* implicit */int) (unsigned short)53568)) : (((/* implicit */int) var_6)))))))));
        arr_26 [i_7] [i_7] = ((/* implicit */short) (-(((/* implicit */int) ((short) ((((/* implicit */int) (unsigned char)101)) / (((/* implicit */int) (_Bool)1))))))));
        arr_27 [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((((_Bool)1) || (((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (2088960ULL))))));
    }
}
