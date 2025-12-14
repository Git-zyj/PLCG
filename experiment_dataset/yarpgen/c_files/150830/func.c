/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150830
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((arr_0 [i_0]) && (((/* implicit */_Bool) arr_1 [16U]))));
        arr_4 [i_0] = ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_2 [i_0])));
        var_13 = ((/* implicit */int) ((_Bool) arr_1 [i_0]));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
    }
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_7))));
    var_15 = ((/* implicit */unsigned long long int) (unsigned short)43537);
    /* LoopSeq 3 */
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 14557590279748274805ULL)) ? (((/* implicit */int) (short)24784)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)21999))))))) << (((((((/* implicit */_Bool) 7675171035494443328ULL)) ? (((/* implicit */long long int) arr_1 [i_1])) : (((long long int) (_Bool)1)))) - (184096786LL)))));
        arr_10 [i_1] = ((/* implicit */unsigned int) arr_8 [i_1] [i_1]);
        var_16 = ((/* implicit */long long int) ((unsigned long long int) (+(((/* implicit */int) arr_0 [i_1])))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (short)-24784)) == (arr_7 [i_1] [i_1])))))))));
        arr_11 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) min(((unsigned short)61631), (min((((/* implicit */unsigned short) var_4)), (arr_2 [i_1])))))) ^ ((+(arr_6 [i_1])))));
    }
    for (unsigned int i_2 = 1; i_2 < 19; i_2 += 2) /* same iter space */
    {
        arr_14 [i_2] = ((/* implicit */unsigned short) ((int) ((((arr_13 [i_2] [i_2]) - (((/* implicit */int) (short)30)))) + (((/* implicit */int) (short)-24785)))));
        arr_15 [i_2] [i_2] = ((/* implicit */unsigned short) min((max((arr_12 [i_2 - 1]), (arr_12 [i_2 - 1]))), (min((arr_12 [i_2 - 1]), (arr_12 [i_2 - 1])))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_12 [i_2]) ? (((/* implicit */int) arr_12 [i_2])) : (arr_13 [i_2] [i_2 - 1])))) == (max((11916044157140241231ULL), (((/* implicit */unsigned long long int) -2046048613))))))))))));
        var_19 *= ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) ((var_2) >= (((/* implicit */int) arr_12 [i_2])))))))));
    }
    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)43516), ((unsigned short)65521)))) ? ((~(((/* implicit */int) arr_18 [i_3])))) : (((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (((/* implicit */int) (unsigned short)43522)) : (((/* implicit */int) (short)-32753))))))), (((unsigned int) ((((/* implicit */int) arr_12 [i_3])) ^ (((/* implicit */int) var_4)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (min((3679641576019671938ULL), (((/* implicit */unsigned long long int) arr_18 [i_4]))))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4845))) > (17989119558573399714ULL)))), (((unsigned char) 2147483647))))) : (((((/* implicit */_Bool) ((long long int) (signed char)-76))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 1643111914152285792ULL)) ? (((/* implicit */int) (short)1685)) : (arr_20 [i_3] [(unsigned char)13] [i_3])))))));
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (~(arr_20 [i_3 - 1] [i_3 + 1] [i_3 - 1]))))));
            arr_21 [i_4] [i_4] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned char)63)), ((-(((((/* implicit */unsigned int) ((/* implicit */int) (short)-13621))) ^ (1U)))))));
            var_23 = ((/* implicit */int) min((((/* implicit */unsigned int) (_Bool)1)), (min((((/* implicit */unsigned int) ((arr_20 [i_3] [i_3] [i_3]) << (((arr_20 [(unsigned short)4] [i_4] [i_4]) - (1149960841)))))), (((((/* implicit */_Bool) 9751851894085067489ULL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(_Bool)1] [(_Bool)1])))))))));
        }
        var_24 = ((/* implicit */short) (_Bool)0);
        var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_17 [i_3 - 1] [i_3 + 1]), (arr_17 [i_3 - 1] [i_3 + 1]))))));
        arr_22 [i_3] = ((/* implicit */_Bool) arr_20 [i_3] [i_3 + 1] [i_3]);
    }
    var_26 *= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (short)8735)))));
}
