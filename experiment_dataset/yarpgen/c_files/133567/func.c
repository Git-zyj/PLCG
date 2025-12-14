/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133567
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((unsigned short) arr_1 [i_0] [i_0]);
                    var_17 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_18 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((arr_6 [i_2] [i_2 + 1] [i_2 - 1]) <= (arr_6 [i_2] [i_2 + 1] [i_2 - 1])))), (((unsigned long long int) (-9223372036854775807LL - 1LL)))));
                                arr_13 [(unsigned char)6] [i_4] = ((/* implicit */short) (unsigned char)15);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) (unsigned char)203);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)12981)), (((arr_14 [i_5] [i_5]) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5] [i_5]))) : (-4072223004360978852LL)))));
        var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) 68719476735LL)), (14748182850786159670ULL))) << (((var_7) + (7132470014345953460LL)))))) || (((/* implicit */_Bool) ((((/* implicit */int) ((-8186826747285949133LL) <= (8186826747285949148LL)))) * ((-(((/* implicit */int) (short)(-32767 - 1))))))))));
        var_22 = (+((+(((/* implicit */int) (unsigned char)94)))));
    }
    var_23 = ((/* implicit */unsigned long long int) (unsigned short)5413);
    /* LoopSeq 1 */
    for (unsigned short i_6 = 2; i_6 < 12; i_6 += 3) 
    {
        arr_19 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((((/* implicit */int) var_2)) + (((/* implicit */int) arr_16 [i_6]))))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */int) arr_16 [i_6])) : (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_1), (arr_16 [i_6]))))) : (9194027781231010531LL)))));
        arr_20 [i_6] [i_6] = (i_6 % 2 == 0) ? (((/* implicit */_Bool) ((((max((arr_18 [i_6 + 2] [i_6]), (((/* implicit */long long int) (_Bool)1)))) >> ((((+(((/* implicit */int) arr_16 [i_6])))) - (59587))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)32)) ? (1988780634) : (((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */_Bool) ((((max((arr_18 [i_6 + 2] [i_6]), (((/* implicit */long long int) (_Bool)1)))) >> ((((((+(((/* implicit */int) arr_16 [i_6])))) - (59587))) + (57707))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)32)) ? (1988780634) : (((/* implicit */int) (_Bool)1))))))));
    }
}
