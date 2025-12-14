/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165770
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) (_Bool)1))));
    var_11 = ((/* implicit */_Bool) (short)10);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                var_12 -= var_0;
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 17; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_4 - 1] = ((/* implicit */signed char) max((4294967268U), (((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (-2147483636))))));
                                var_13 = ((/* implicit */short) ((_Bool) (short)0));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */long long int) 2315573406U);
                arr_16 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2315573406U)), (14262017458277328469ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)54128))))));
                var_15 += ((/* implicit */unsigned short) (short)-35);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        var_16 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) 1979393868U)), (var_9)))));
        var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) 2315573397U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), ((_Bool)1))))) : (min((18014398509481983ULL), (((/* implicit */unsigned long long int) 1979393898U))))));
        var_18 = ((/* implicit */unsigned short) max((((/* implicit */short) max(((signed char)-98), (((/* implicit */signed char) var_3))))), (((short) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)0)))))));
    }
    for (int i_6 = 1; i_6 < 18; i_6 += 1) 
    {
        var_19 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 13443397844215308544ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12654))) : (var_9))), (((/* implicit */long long int) var_5))));
        arr_23 [i_6] [i_6] = ((/* implicit */int) max((((/* implicit */long long int) 0)), (max((((/* implicit */long long int) (short)26775)), (-1LL)))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((/* implicit */int) (short)10)))))));
        arr_24 [i_6] [i_6] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned short) var_3)), (var_6))), (((/* implicit */unsigned short) ((_Bool) -7458436861916434337LL)))));
        arr_25 [i_6] = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) -2147483632)), (min((((/* implicit */unsigned long long int) var_7)), (4184726615432223134ULL))))), (((/* implicit */unsigned long long int) (-(min((((/* implicit */int) (signed char)6)), (var_4))))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min(((-(var_1))), (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (unsigned short)7235)) ? (14262017458277328445ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17)))))));
        arr_29 [i_7] = ((/* implicit */unsigned short) var_8);
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 2; i_8 < 22; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_22 ^= ((/* implicit */_Bool) (unsigned short)0);
                    var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)255)), ((-(((/* implicit */int) (unsigned short)7))))));
                }
            } 
        } 
    }
}
