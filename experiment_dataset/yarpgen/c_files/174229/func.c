/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174229
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
    var_18 = ((/* implicit */long long int) (-(min((((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (var_12)))))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((~(var_17))), (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3072)))))))) ? ((~(var_3))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15589))) | (1045106302577806422ULL)))));
    var_20 &= ((/* implicit */unsigned int) var_1);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_14)) & (((/* implicit */int) var_14))))))) ? (((arr_1 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) << (((((/* implicit */int) (unsigned short)15589)) - (15582))))) ^ ((~(((/* implicit */int) (short)-3072)))))))));
        arr_2 [i_0] [(unsigned short)21] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)255))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26786))) != (arr_1 [13U])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))) : (min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18871))) : (arr_1 [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)102))) >= (((((long long int) arr_6 [3U] [i_2] [i_1])) << (((var_15) + (783718508)))))));
                    arr_11 [i_3] = ((/* implicit */unsigned short) 1045106302577806422ULL);
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-3072)) ? (((((/* implicit */_Bool) arr_1 [(unsigned char)19])) ? (((/* implicit */int) (unsigned short)26786)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_16))))) / (min(((~(arr_9 [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) << (((((((/* implicit */int) (short)-26377)) + (26404))) - (24))))))))));
                    var_24 = ((/* implicit */long long int) min((((unsigned int) (-(17401637771131745193ULL)))), (((/* implicit */unsigned int) (unsigned char)85))));
                }
            } 
        } 
        var_25 &= ((/* implicit */unsigned long long int) var_13);
        var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) min(((short)-3052), (var_13)))) + (2147483647))) << (((min((arr_1 [i_1]), (((/* implicit */unsigned int) var_14)))) - (145U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((unsigned int) ((((/* implicit */_Bool) arr_0 [8ULL] [i_1])) ? (arr_8 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (arr_3 [i_1])))) ? (((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)38749)) * (((/* implicit */int) var_13))))) * (min((arr_1 [i_1]), (((/* implicit */unsigned int) var_5)))))) : (((((/* implicit */_Bool) arr_10 [i_1])) ? (((((/* implicit */_Bool) (unsigned short)15589)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [15]))) : (3115530688U))) : (((/* implicit */unsigned int) var_10)))))))));
    }
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((var_7) / (((/* implicit */unsigned int) var_10)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) << (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (var_3)))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)3075)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38734))) : (4294967295U)))), ((~(var_11)))))));
}
