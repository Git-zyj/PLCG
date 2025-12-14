/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165934
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */short) ((((arr_1 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) << (((arr_2 [i_0] [i_0 - 3]) - (3917988748U)))))) : (((/* implicit */short) ((((arr_1 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) << (((((arr_2 [i_0] [i_0 - 3]) - (3917988748U))) - (1523143059U))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [4] [i_0] [i_0 - 1] [i_0 + 2]))) : (1464742727086017578ULL))))));
                        var_19 = ((/* implicit */short) ((((((/* implicit */int) var_7)) >= (((/* implicit */int) (unsigned char)241)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */_Bool) 18066240071187237566ULL)) || (((/* implicit */_Bool) (signed char)86)))))));
                    }
                    arr_13 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)99)) != (((/* implicit */int) (short)23822))))) != (((/* implicit */int) ((-2078046903) > ((-2147483647 - 1)))))));
                    var_20 = ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_1] [i_2]);
                    var_21 = ((/* implicit */int) ((5901101415831739793LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-14)))));
                    var_22 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)127)) <= (((/* implicit */int) (short)-28861)))) ? (((/* implicit */int) (unsigned char)68)) : (((((/* implicit */_Bool) (short)27397)) ? (((/* implicit */int) var_1)) : (2147483647)))));
                }
            } 
        } 
        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-32))));
    }
    for (unsigned int i_4 = 4; i_4 < 18; i_4 += 3) 
    {
        var_24 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_4 [i_4 + 1] [i_4])), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)60685))))));
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned int) (signed char)-38);
        arr_17 [i_4] [i_4] = (_Bool)1;
        arr_18 [i_4] = ((/* implicit */unsigned long long int) (((!((!(((/* implicit */_Bool) (unsigned short)16626)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_7 [i_4] [i_4] [14U]), (((/* implicit */short) (unsigned char)255))))) ? (max((((/* implicit */unsigned long long int) (short)-16645)), (14206691942600802746ULL))) : (((/* implicit */unsigned long long int) -1)))))));
    }
    for (int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        var_25 = ((/* implicit */int) var_4);
        arr_23 [i_5] = max((((/* implicit */unsigned int) (short)-3629)), (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (1853230898U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)103))) < (1264225434U))))))));
        arr_24 [22U] = ((/* implicit */unsigned char) min((max((((arr_0 [i_5]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)179))))), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_19 [i_5])), (max((var_2), (((/* implicit */int) (unsigned short)12468)))))))));
        arr_25 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((_Bool) (signed char)-1)))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned int) 576460752303423480LL);
                    arr_31 [i_7] = ((/* implicit */_Bool) arr_21 [i_6] [i_7]);
                    arr_32 [i_7] [i_6] [i_7] = ((/* implicit */unsigned int) (_Bool)1);
                }
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) var_5))));
    var_28 = ((/* implicit */unsigned long long int) var_7);
    var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((var_9) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)50584)) : (((/* implicit */int) (short)23043))))))))));
    var_30 += ((/* implicit */_Bool) max((((((18446744073709551615ULL) / (((/* implicit */unsigned long long int) var_15)))) / (((/* implicit */unsigned long long int) ((var_9) << (((var_10) + (552173315)))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 474015989)) ? (((/* implicit */int) (short)32767)) : (var_15))) & (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))))));
}
