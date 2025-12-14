/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162332
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
    var_15 = ((/* implicit */unsigned char) (-(min((min((((/* implicit */unsigned long long int) (unsigned char)0)), (var_6))), (var_6)))));
    var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2124247078U)), (max((max((148840121034799822ULL), (((/* implicit */unsigned long long int) 0LL)))), (((/* implicit */unsigned long long int) 2170720217U))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) max((2170720227U), (((/* implicit */unsigned int) (unsigned char)231))));
        var_18 = ((/* implicit */signed char) arr_0 [i_0]);
        var_19 = ((/* implicit */_Bool) ((unsigned char) min((arr_0 [i_0]), (((/* implicit */int) (unsigned short)53416)))));
        var_20 -= ((/* implicit */long long int) ((_Bool) ((long long int) max((((/* implicit */long long int) arr_0 [(signed char)4])), (-4735085020997203356LL)))));
    }
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_21 = ((/* implicit */_Bool) ((((((_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24576))) : (((((/* implicit */_Bool) 8935421374796359148LL)) ? (2170720218U) : (((/* implicit */unsigned int) 5)))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65533)))));
        var_22 ^= ((/* implicit */_Bool) (unsigned short)65535);
        arr_4 [i_1] [i_1] |= ((/* implicit */long long int) min((var_6), (((/* implicit */unsigned long long int) (short)-12064))));
        var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4194288U)))))));
    }
    for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2] [i_2])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_3 = 1; i_3 < 7; i_3 += 3) 
        {
            arr_9 [i_3] = ((/* implicit */unsigned int) var_11);
            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32752))) >= (1452312793U))))))));
        }
        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            arr_12 [8LL] [i_2] [i_2] = 6212328794209213153LL;
            arr_13 [i_2] [i_2] [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (min((2170720232U), (((/* implicit */unsigned int) arr_10 [i_2] [i_4]))))))));
            /* LoopNest 3 */
            for (long long int i_5 = 1; i_5 < 10; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        {
                            var_26 = (~((~(min((((/* implicit */unsigned int) -1778092174)), (var_2))))));
                            arr_23 [i_6] [i_6] [i_5] [i_6] [i_7] [i_2] [3U] = ((/* implicit */signed char) (~((~(var_12)))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
        {
            arr_26 [i_2] [2] = ((/* implicit */unsigned int) ((max((4294967285U), (((/* implicit */unsigned int) 134217216)))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_2] [i_2] [i_8])))));
            var_27 = ((/* implicit */_Bool) min((((/* implicit */long long int) (~((-(((/* implicit */int) arr_10 [i_2] [i_2]))))))), (arr_11 [i_2] [i_8] [10LL])));
            arr_27 [i_8] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_1 [i_2] [i_2]))))));
            arr_28 [i_2] |= ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) var_9)) | (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned long long int) 4194308U)) : (6862766248914624319ULL))))), (((/* implicit */unsigned long long int) ((804549293137915560LL) / (var_8))))));
        }
    }
    var_28 = ((/* implicit */_Bool) (~((-(var_14)))));
}
