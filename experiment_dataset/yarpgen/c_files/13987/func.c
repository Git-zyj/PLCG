/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13987
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
    var_13 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((var_14), ((!(max(((!(((/* implicit */_Bool) -6418063671291585326LL)))), (var_7)))))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) 4294967290U)))))) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (signed char)-108))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)222))))) | ((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_1 [i_0 - 2] [i_0])))))));
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((_Bool) arr_3 [i_0 - 1] [i_0 + 2])))));
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? ((-(var_2))) : (((/* implicit */long long int) ((unsigned int) (unsigned char)4)))))) ? (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */signed char) var_7)), ((signed char)-65)))) <= (((/* implicit */int) (unsigned char)7))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)241)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)226))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        var_18 = ((/* implicit */long long int) (unsigned char)67);
        /* LoopSeq 1 */
        for (unsigned char i_3 = 3; i_3 < 20; i_3 += 4) 
        {
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_10 [i_3 - 2] [i_3])), (var_11)))) ? (((arr_7 [i_3 - 2] [i_3]) ? (((/* implicit */int) arr_10 [i_3 - 2] [i_3 + 4])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_3 - 2] [(unsigned char)10])) == (((/* implicit */int) arr_10 [i_3 - 2] [i_3 + 2])))))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_5 = 2; i_5 < 23; i_5 += 4) 
                {
                    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
                    arr_18 [(unsigned char)20] [i_5 - 1] [i_4] [(unsigned char)2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_17 [i_2] [i_3 - 3] [i_3] [i_3] [i_3] [i_3]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)5)))) : (((/* implicit */int) arr_16 [i_3] [i_3] [i_4] [i_4]))));
                }
                var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)192))))) ? (((arr_7 [i_2] [i_3]) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */_Bool) 3425876340U)) || (((/* implicit */_Bool) 1170183973439109195LL)))))))));
                arr_19 [i_3] = var_10;
            }
            var_22 ^= ((((/* implicit */long long int) ((/* implicit */int) max((var_5), (max((var_9), (((/* implicit */unsigned char) arr_6 [i_2])))))))) != (((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((((/* implicit */_Bool) 481149780U)) ? (((/* implicit */long long int) var_1)) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3 + 2] [(unsigned char)2]))))));
        }
        arr_20 [i_2] [i_2] = ((/* implicit */unsigned int) arr_14 [i_2] [i_2]);
    }
}
