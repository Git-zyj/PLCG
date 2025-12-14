/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149142
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) 4057176239U);
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16402070931728048704ULL)) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_9)), (var_19)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))) : (((((/* implicit */_Bool) 16402070931728048704ULL)) ? (2044673141981502927ULL) : (2044673141981502911ULL)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) ((2044673141981502921ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 1 */
        for (short i_2 = 2; i_2 < 15; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (signed char i_3 = 2; i_3 < 16; i_3 += 3) 
            {
                var_23 += ((/* implicit */int) min((((/* implicit */long long int) var_11)), (max((((/* implicit */long long int) arr_7 [i_1] [i_2 + 2] [i_3])), (arr_3 [i_2 + 3] [i_3 + 2])))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 17; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) (short)16512);
                            var_25 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9679))) : (15428893187250466535ULL));
                        }
                    } 
                } 
            }
            for (unsigned char i_6 = 1; i_6 < 17; i_6 += 1) 
            {
                var_26 = ((/* implicit */short) (unsigned char)4);
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) var_6)) : (var_3))) / (((16402070931728048700ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167)))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))))), (var_11))))) : (var_6)));
                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((16402070931728048704ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47318))))))) ? ((((~(2044673141981502912ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 - 1] [i_6 + 1]))))) : (((min((((/* implicit */unsigned long long int) arr_11 [i_6] [i_1] [i_1])), (16402070931728048703ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_1]))))))))));
            }
            for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) 16402070931728048692ULL)) ? (5355816138569630251ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9679)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned char)16] [i_2] [i_1])) ? (((/* implicit */int) (signed char)18)) : (-1080427937)))) ? (((/* implicit */int) (short)568)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_16))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 1; i_8 < 16; i_8 += 4) 
                {
                    for (short i_9 = 2; i_9 < 17; i_9 += 4) 
                    {
                        {
                            var_30 = var_15;
                            var_31 -= ((/* implicit */signed char) (~((~(((/* implicit */int) arr_12 [(signed char)12] [(signed char)12]))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) ((min((var_3), (((/* implicit */unsigned long long int) var_19)))) / (var_2))))));
                var_33 = ((/* implicit */long long int) min((max((((2044673141981502912ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) ^ (var_0))))), ((+((+(var_7)))))));
                var_34 = ((/* implicit */unsigned short) arr_21 [i_7]);
            }
            var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(1705066191)))))))));
        }
        var_36 = ((/* implicit */_Bool) (-((((-(3348461880U))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [(unsigned char)1] [i_1])))))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) /* same iter space */
    {
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) min(((unsigned short)14495), (((/* implicit */unsigned short) (_Bool)1)))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_10]))) ^ (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((!(((/* implicit */_Bool) var_2)))), ((!(((/* implicit */_Bool) 5124127980896088669ULL))))))))));
        var_38 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_4)), (2044673141981502912ULL)));
    }
    var_39 = ((/* implicit */int) var_3);
    var_40 -= ((/* implicit */short) (~(min((((((/* implicit */_Bool) (short)568)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)31)))), (592245235)))));
}
