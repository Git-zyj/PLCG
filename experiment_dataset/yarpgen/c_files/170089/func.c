/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170089
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
    var_11 = ((/* implicit */short) (signed char)-103);
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))) : (335648279854118682LL)))) ? (-2044261925946632922LL) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((((/* implicit */int) (unsigned char)243)) < (((/* implicit */int) (unsigned short)30962)))) ? (((arr_1 [i_0]) ? (((/* implicit */int) (short)-8192)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)21497)) || (((/* implicit */_Bool) var_4))))))) : ((+(((/* implicit */int) arr_2 [i_0])))))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) max((1556183988), (((/* implicit */int) (unsigned short)65534))))) ? ((+(((/* implicit */int) (short)-11157)))) : (max((((/* implicit */int) (unsigned short)21479)), (((arr_1 [i_0]) ? (((/* implicit */int) (short)32766)) : (((/* implicit */int) arr_2 [i_1])))))))))));
                    arr_9 [i_1] [i_1 - 2] [i_1] = ((/* implicit */long long int) (+(var_5)));
                    arr_10 [i_0] [i_1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) 1556183982))) ? (((/* implicit */int) (short)-9587)) : (((/* implicit */int) (unsigned char)223))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */long long int) ((short) 141422544U));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_3 = 2; i_3 < 17; i_3 += 3) 
        {
            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (unsigned short)3597))));
            var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))));
        }
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (((((/* implicit */unsigned int) arr_4 [i_0] [i_4] [i_4])) * (((((/* implicit */_Bool) -5819074893618518634LL)) ? (81006358U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1986)))))))));
            var_18 |= ((/* implicit */unsigned short) -335648279854118681LL);
            var_19 = ((/* implicit */unsigned long long int) var_3);
        }
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_4 [i_0] [i_0] [i_0]) < (arr_4 [i_0] [i_5] [i_5])))))))));
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_10))));
                        arr_25 [i_0] [i_7] = ((/* implicit */unsigned short) 18446744073709551608ULL);
                        var_22 = ((/* implicit */long long int) max(((+(((/* implicit */int) (unsigned char)120)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_6] [i_7])) || (var_2))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((((/* implicit */int) ((_Bool) arr_3 [i_5]))) <= (((int) var_7)))) ? ((+(((/* implicit */int) max((arr_21 [i_0] [i_5] [i_5]), (((/* implicit */unsigned char) arr_2 [i_0]))))))) : (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_5])) ? (67104768) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_5])))))))));
        }
    }
    var_24 = ((/* implicit */long long int) max((var_5), (max(((+(((/* implicit */int) var_0)))), (((/* implicit */int) var_9))))));
    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1556183959)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)244)))))) ? (max((-66793338), (((/* implicit */int) var_10)))) : (((/* implicit */int) var_8))))), (((((((/* implicit */int) (signed char)-47)) >= (-672890883))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (signed char)126))))))))));
}
