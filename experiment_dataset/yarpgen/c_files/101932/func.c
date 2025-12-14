/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101932
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
    var_13 = ((/* implicit */unsigned int) ((long long int) 2543408299757472411ULL));
    var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)135))) % (var_7))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)252)) >= (((/* implicit */int) var_8))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) ((short) -6553722921916948284LL))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) (-(arr_6 [i_1 + 1] [i_1] [i_1 + 3])));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_16 *= ((/* implicit */unsigned short) 5567146002571739537LL);
                        arr_9 [i_1] [i_1 + 3] [i_1 + 3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1 - 1] [i_1] [i_1 + 3] [i_1 + 2]))) != (min((-5567146002571739559LL), (((/* implicit */long long int) arr_0 [i_1]))))))) & (((/* implicit */int) (signed char)64))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_4 = 1; i_4 < 22; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 4; i_5 < 22; i_5 += 3) 
            {
                for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    {
                        var_17 &= ((/* implicit */short) ((((((unsigned int) arr_10 [(unsigned char)10] [i_4])) | (((4294967290U) << (((16359232359465998584ULL) - (16359232359465998555ULL))))))) | (((/* implicit */unsigned int) (+(arr_5 [i_0]))))));
                        arr_17 [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) 2087511714243553041ULL))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) 
    {
        arr_21 [i_7] = ((/* implicit */unsigned int) min((((min((((/* implicit */long long int) (unsigned char)133)), (-6015231007693084609LL))) - (((/* implicit */long long int) ((/* implicit */int) (short)-31525))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(arr_20 [i_7])))) < (16359232359465998584ULL))))));
        var_18 *= ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))), (9223372036854775807LL)));
    }
    /* LoopNest 3 */
    for (signed char i_8 = 4; i_8 < 15; i_8 += 2) 
    {
        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) (-(-1482670005)));
                    var_20 = 18446744073709551615ULL;
                    /* LoopSeq 2 */
                    for (int i_11 = 4; i_11 < 13; i_11 += 2) 
                    {
                        arr_33 [i_10] = ((/* implicit */_Bool) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) 2543408299757472411ULL)))))))));
                        var_21 = ((var_5) - (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)41)))))))));
                        arr_34 [i_8] [i_9] [i_8] = ((/* implicit */unsigned char) ((1482670028) + (((/* implicit */int) (unsigned char)96))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 2) 
                    {
                        var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_6 [i_8] [i_8] [i_9])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)68)))))))));
                        var_23 *= ((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (unsigned char)233)))), (((/* implicit */int) (signed char)115))))) | (max((((/* implicit */unsigned long long int) arr_1 [i_8 - 2])), ((~(16102160415889855857ULL))))));
                        arr_39 [i_8 - 2] [i_9] [i_10] [i_12] = ((((/* implicit */unsigned long long int) ((arr_13 [i_12]) | (arr_13 [i_12])))) % ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_12]))) ^ (var_7))))));
                    }
                }
            } 
        } 
    } 
}
