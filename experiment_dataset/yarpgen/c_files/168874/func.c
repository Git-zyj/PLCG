/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168874
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) (signed char)-115);
                        arr_14 [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)119)) >= (((/* implicit */int) (signed char)-106))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (signed char)-22))));
                            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)108))));
                            arr_19 [i_0] [i_1 + 1] [i_3] [i_3] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned short)20632)) : (((/* implicit */int) (signed char)-111))));
                        }
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) 1048575U)) ? (14041827326189903773ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)46)))));
                        arr_20 [i_2] [i_3] [i_1 - 2] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)-115)) <= (((/* implicit */int) (signed char)119))))) * (2084113266)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)5288))) * (1610127548U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) 3266974431U)) && (((/* implicit */_Bool) (signed char)-120))))))))));
                    }
                } 
            } 
        } 
        arr_21 [i_0] = ((/* implicit */_Bool) 1516106801U);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)113)) <= (((/* implicit */int) (short)0)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (unsigned char)126))))) : (((((/* implicit */_Bool) (unsigned char)209)) ? (1516106804U) : (0U)))));
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_32 [i_5] [i_5] [(unsigned short)14] [i_7] [i_7] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-89)))) % (((((/* implicit */_Bool) (unsigned char)92)) ? (((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) (short)0)))) : (((/* implicit */int) (signed char)-116))))));
                        arr_33 [i_5] [i_5] [i_5] [i_8] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 1954201173U)))) ? (((((/* implicit */_Bool) -6623639563988589823LL)) ? (((/* implicit */int) (unsigned char)194)) : (((/* implicit */int) (signed char)-30)))) : (((/* implicit */int) (unsigned short)46362))));
                        var_16 &= ((/* implicit */short) (_Bool)1);
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)120)) > (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) 3930401890U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)83))) : (1954201178U)))))) ? (((((/* implicit */_Bool) (unsigned short)14253)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10958))) : (17477011050961876686ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (short)15606)))))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */short) var_9);
}
