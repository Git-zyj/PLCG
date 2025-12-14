/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114160
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_15 [i_2] [i_1] [9ULL] [i_3] [i_0] = ((/* implicit */long long int) -855601572);
                                var_16 = ((/* implicit */signed char) ((short) (+(1869864257))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_17 += ((/* implicit */_Bool) 2965573790U);
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_1 - 2] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_0 - 1] [i_1] [i_2] [i_2] [i_6])) % (max((min((((/* implicit */int) var_4)), (1491435522))), ((-(855601569)))))));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max((((unsigned long long int) arr_13 [i_0] [i_5])), (((/* implicit */unsigned long long int) -5472693186123038064LL)))))));
                            arr_23 [(_Bool)1] [(_Bool)1] [8ULL] [i_5] [8ULL] [i_0] = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned long long int) ((unsigned char) arr_11 [i_0] [i_1 + 1] [i_2] [i_5] [i_6]))), (((unsigned long long int) 2965573765U))))));
                        }
                        var_19 = ((/* implicit */unsigned long long int) (_Bool)0);
                        var_20 += ((/* implicit */unsigned int) (_Bool)1);
                    }
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_7] [(unsigned char)3] [i_0] [i_0] [i_0])) ? (1491435538) : (((/* implicit */int) (short)127))))) ? ((~(15039400036904045374ULL))) : (((/* implicit */unsigned long long int) max((arr_16 [i_7] [i_7]), (((/* implicit */int) (signed char)-11)))))))))))));
                        arr_28 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) max(((signed char)-75), (var_9))))));
                        arr_29 [i_7] [i_0] [i_1] = ((/* implicit */unsigned char) max(((+(arr_9 [i_0 + 1]))), (((/* implicit */unsigned int) var_0))));
                        arr_30 [i_7] [i_7] [i_0] |= ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)9562)) ? (1491435546) : (arr_16 [i_1 - 1] [i_1]))) > (((((/* implicit */int) var_10)) % (2147483647)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */short) (~((+(((/* implicit */int) (short)293))))));
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (-(((/* implicit */int) min(((unsigned char)193), (((/* implicit */unsigned char) var_2))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 |= (-(((/* implicit */int) (_Bool)1)));
    var_25 |= ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55722))) / (8815044152032817633ULL));
}
