/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132281
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
    var_10 += min((max((((/* implicit */int) ((var_7) <= (var_5)))), ((-(var_7))))), (((/* implicit */int) var_8)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 2) /* same iter space */
    {
        var_11 = ((((/* implicit */_Bool) max((-2072927999203829441LL), (2072927999203829427LL)))) ? ((~(var_5))) : (var_7));
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) var_4))));
            var_13 = ((/* implicit */short) max((((unsigned char) max((2072927999203829438LL), (((/* implicit */long long int) (unsigned char)0))))), (arr_1 [2])));
        }
        for (signed char i_2 = 2; i_2 < 9; i_2 += 2) 
        {
            var_14 = ((/* implicit */short) arr_6 [i_0]);
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */long long int) ((int) (signed char)127))) ^ (((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_1))))))));
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((/* implicit */_Bool) max((-2072927999203829416LL), (((/* implicit */long long int) ((((/* implicit */int) (short)3)) % (((/* implicit */int) (signed char)127)))))))) ? (((/* implicit */unsigned long long int) ((((var_7) / (((/* implicit */int) var_3)))) % (var_5)))) : ((-(arr_0 [i_2])))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_3 = 2; i_3 < 7; i_3 += 3) 
        {
            var_17 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_0]);
            var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) var_0)))))));
            var_19 |= (!(((((/* implicit */_Bool) (-(var_9)))) || (((/* implicit */_Bool) max((var_5), (((/* implicit */int) arr_5 [i_0 + 1] [i_3] [i_0]))))))));
            var_20 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) var_9)) ? (arr_6 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1] [4ULL]))))) == (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)245))))) || (((/* implicit */_Bool) var_6))))));
            var_21 ^= ((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (signed char)120)))), ((+(2147483647)))))) + ((+(arr_8 [(unsigned char)10]))));
        }
    }
    for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) max((((/* implicit */short) (signed char)-111)), (var_6)))), ((+(var_9)))))));
        var_23 = ((long long int) (-(((/* implicit */int) var_3))));
    }
    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            for (long long int i_7 = 2; i_7 < 8; i_7 += 2) 
            {
                for (short i_8 = 1; i_8 < 9; i_8 += 2) 
                {
                    {
                        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_7 - 1] [i_5] [i_5 + 1])))))));
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) + (((((/* implicit */_Bool) arr_10 [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_7] [i_7] [i_7]))) : (var_9))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (var_5)))) ? (((/* implicit */int) max((arr_15 [i_5]), (arr_15 [i_6])))) : ((+(var_5)))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 1; i_10 < 10; i_10 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) max(((-(arr_14 [i_10 - 1] [i_10 + 1]))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5] [i_5]))) >= (arr_8 [i_9])))))))));
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_5] [i_5])))))))) > (((/* implicit */int) ((signed char) ((var_1) != (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)117))) : (max((min((arr_6 [i_5]), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)141)))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 3; i_11 < 9; i_11 += 2) 
        {
            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (((-(((-2072927999203829421LL) + (((/* implicit */long long int) ((/* implicit */int) var_0))))))) / (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_6)))) % (var_1))))))));
            var_30 = ((/* implicit */_Bool) (+(min((max((((/* implicit */unsigned long long int) var_5)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) var_3))))));
        }
        for (unsigned short i_12 = 1; i_12 < 10; i_12 += 1) 
        {
            var_31 = ((/* implicit */short) (~((-(((/* implicit */int) arr_18 [i_5] [(signed char)8] [i_12]))))));
            var_32 = ((/* implicit */unsigned short) ((int) arr_25 [(short)0] [(short)0] [i_12]));
        }
        var_33 = arr_12 [i_5];
    }
    var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) var_0))));
}
