/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145186
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)238)) && (((/* implicit */_Bool) (short)0))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) var_8);
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_20 = ((/* implicit */short) (-((+(((/* implicit */int) (signed char)-104))))));
            arr_6 [i_0] = ((/* implicit */unsigned char) var_11);
        }
        for (long long int i_2 = 1; i_2 < 11; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) min(((short)23455), (((/* implicit */short) (unsigned char)18))))) == (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)23455)) : (((/* implicit */int) (unsigned char)194))))));
            arr_9 [i_0] = ((/* implicit */unsigned char) var_4);
            arr_10 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), ((-(((((/* implicit */long long int) ((/* implicit */int) var_1))) % (var_9)))))));
        }
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned char)238))))), (max((((/* implicit */unsigned short) var_4)), (var_15)))));
            arr_13 [i_0] = ((/* implicit */signed char) (~(((var_6) & ((~(((/* implicit */int) (_Bool)0))))))));
            var_23 = ((/* implicit */_Bool) ((unsigned char) var_7));
        }
        var_24 -= ((/* implicit */signed char) ((max((min((var_9), (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) min((var_13), (((/* implicit */unsigned int) 50655830))))))) % ((~(var_9)))));
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (17448772889621359933ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? ((-(var_17))) : (((var_11) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3))))));
        arr_14 [i_0] = ((/* implicit */int) var_2);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 4) 
        {
            for (int i_6 = 2; i_6 < 9; i_6 += 1) 
            {
                {
                    arr_22 [i_4] [i_5] [i_6] [i_6] = ((/* implicit */signed char) max((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 17448772889621359950ULL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16)))), (((/* implicit */int) var_11)))))));
                    var_26 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) ((((/* implicit */int) var_18)) >= (((/* implicit */int) (unsigned short)34855))))) : (((/* implicit */int) var_0)))) / (((/* implicit */int) (((((_Bool)1) ? (var_6) : (((/* implicit */int) var_11)))) != (((1766894239) ^ (((/* implicit */int) var_18)))))))));
                    var_27 = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (var_13))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_12)))))));
                }
            } 
        } 
        var_28 -= ((((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (((unsigned short) var_17))))) * (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_14))))));
        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((max((var_9), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16))))))) >> (((/* implicit */int) var_3)))))));
        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) var_17))));
    }
}
