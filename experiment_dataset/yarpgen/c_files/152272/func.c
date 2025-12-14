/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152272
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */int) (signed char)-88)) > (((/* implicit */int) (unsigned short)43246))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */int) var_12)) | (((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 1]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) max((var_4), (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_13)) ^ (-1823072874))) : (((/* implicit */int) ((unsigned short) (unsigned short)43246)))))));
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((18328180050707281596ULL) / (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_13)) == (1823072873))) ? (((/* implicit */int) ((unsigned short) var_4))) : (((((/* implicit */int) var_6)) + (((/* implicit */int) (unsigned char)150))))))))))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                {
                    arr_14 [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3]))) | (((((/* implicit */_Bool) 11461401541411964775ULL)) ? (118564023002270019ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30625)))))));
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((var_0) + (((/* implicit */unsigned long long int) (+(arr_13 [i_4] [i_2] [i_4])))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_5 = 1; i_5 < 13; i_5 += 3) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(var_3)))) * ((~(((118564023002270020ULL) >> (((118564023002270005ULL) - (118564023002269969ULL)))))))));
        arr_18 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) arr_2 [i_5 + 3])) ? (((/* implicit */int) arr_2 [i_5 + 3])) : (((/* implicit */int) var_6)))) : (((((((((/* implicit */int) arr_12 [i_5] [i_5] [i_5])) + (2147483647))) << (((((-5276829552967166998LL) + (5276829552967167005LL))) - (7LL))))) / (((/* implicit */int) ((short) -977867595)))))));
        arr_19 [i_5] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)30624)), (((unsigned long long int) arr_15 [i_5 - 1] [i_5]))));
    }
    for (short i_6 = 3; i_6 < 18; i_6 += 3) 
    {
        var_18 = ((/* implicit */int) arr_12 [i_6] [i_6] [i_6]);
        var_19 = ((/* implicit */_Bool) min((var_19), ((!(((/* implicit */_Bool) var_7))))));
    }
    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_20 &= ((/* implicit */unsigned int) (short)30625);
                    arr_33 [i_9] [i_9] [i_9] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [(unsigned char)5])))))) - (((18328180050707281613ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25053))))))) > (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) -1725209369)), (367913547U))))));
                    arr_34 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) (-(-1605923757)));
                }
            } 
        } 
        arr_35 [i_7] [i_7] = ((/* implicit */short) (-(18328180050707281622ULL)));
    }
}
