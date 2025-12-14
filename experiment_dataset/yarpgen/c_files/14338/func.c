/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14338
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) ^ ((~(1755880158625247434LL)))));
        var_18 = ((/* implicit */unsigned short) ((-1294964796283805260LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16)))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) ((var_5) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))), (arr_0 [i_0] [i_0])))) || (((((/* implicit */long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) arr_0 [i_0] [i_0]))))) < (1755880158625247447LL)))));
    }
    for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    arr_12 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17940)) ? (1755880158625247456LL) : (((/* implicit */long long int) ((/* implicit */int) (short)11759)))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1])))))) ? (((((/* implicit */int) arr_9 [i_1] [i_2] [i_1 + 2])) << (((/* implicit */int) arr_9 [i_1] [i_2] [i_1 + 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-11752)))))));
                    var_20 = (i_1 % 2 == zero) ? (((/* implicit */_Bool) ((min((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)-8430)))), (min((392967938441314956LL), (var_15))))) & (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)5404)) << (((((/* implicit */int) arr_11 [i_2] [i_1] [i_2])) - (114)))))), (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) & (7943913658615479741LL)))))))) : (((/* implicit */_Bool) ((min((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)-8430)))), (min((392967938441314956LL), (var_15))))) & (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)5404)) << (((((((/* implicit */int) arr_11 [i_2] [i_1] [i_2])) - (114))) - (41)))))), (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) & (7943913658615479741LL))))))));
                    arr_13 [i_2] [i_2] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_2] [8LL]))) | (min((-1LL), (((/* implicit */long long int) (unsigned short)5054)))));
                }
            } 
        } 
        arr_14 [i_1] = ((((/* implicit */_Bool) min(((unsigned char)197), (((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_1 + 3])) <= (((/* implicit */int) arr_8 [i_1] [i_1])))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((-3220795461139355476LL) % (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 + 2] [i_1] [i_1 + 3]))))));
        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (((/* implicit */int) arr_3 [i_1 + 3])) : (((/* implicit */int) arr_3 [i_1 + 1])))) ^ (((((/* implicit */_Bool) -9084867397059726427LL)) ? (((/* implicit */int) arr_6 [i_1])) : (((((/* implicit */int) var_10)) | (((/* implicit */int) arr_6 [i_1]))))))));
    }
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            {
                arr_20 [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_4] [i_4])) && (((/* implicit */_Bool) arr_15 [i_4] [i_4])))))));
                var_22 = ((/* implicit */unsigned short) min((4306621309013040278LL), (-2160868436432946485LL)));
            }
        } 
    } 
}
