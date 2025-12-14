/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136708
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
    var_16 = ((/* implicit */unsigned long long int) (unsigned char)185);
    var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-11346))) : (989554490U))), (((/* implicit */unsigned int) var_0))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_7 [(_Bool)1] [i_1] [i_2] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) max(((signed char)-116), (((/* implicit */signed char) var_15))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-32726))))) : (min((((/* implicit */unsigned int) (_Bool)1)), (arr_4 [i_2]))))));
                    var_18 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) var_6)), (((arr_2 [i_1 + 1]) ? (min((((/* implicit */unsigned long long int) var_3)), (arr_1 [(signed char)11]))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 1]))) | (arr_5 [i_0] [i_1] [(short)12]))))))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned short) max((arr_4 [i_0 - 1]), (((/* implicit */unsigned int) var_5))));
        var_19 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) 16561962222912689838ULL)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (_Bool)1))))));
        var_20 = ((/* implicit */unsigned int) (_Bool)1);
    }
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)139)))))) ? (var_2) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (min((16357162113869175811ULL), (((/* implicit */unsigned long long int) arr_9 [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((2453508896U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10)))))))))) ? (((3836719663U) & (((/* implicit */unsigned int) -1047602702)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_5 [i_3] [i_3] [i_3])) : (1884781850796861777ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)552))) : (((((/* implicit */_Bool) arr_6 [i_3])) ? (arr_4 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    {
                        var_23 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 18420126988637293902ULL)) ? (9878169616710704519ULL) : (288102105829963598ULL)))));
                        arr_21 [i_4] [i_4] &= ((/* implicit */int) arr_14 [6ULL] [i_6] [i_7]);
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) min((2453508896U), (((/* implicit */unsigned int) (unsigned char)255)))))));
                    }
                } 
            } 
            arr_22 [i_4] [i_5] = (-(var_6));
        }
        for (signed char i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5795731281693525063LL)) ? (14692458353869453606ULL) : (arr_11 [i_8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)45)) < (((/* implicit */int) (_Bool)1)))))) : (518771429U))))));
            arr_25 [i_8] = ((/* implicit */long long int) (+(((/* implicit */int) min((((((/* implicit */unsigned long long int) -1047602711)) == (288102105829963589ULL))), ((!(var_5))))))));
        }
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
        {
            arr_28 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) var_8))));
            arr_29 [(unsigned short)2] [i_9] = ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (unsigned char)8)));
            arr_30 [i_9] [i_9] [(unsigned char)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1650532184U)) ? (1156453062756313637LL) : (((/* implicit */long long int) -1))));
            var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 18158641967879588056ULL))));
        }
        var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 288102105829963589ULL)) ? (2699666522U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
    }
    var_28 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)202)), (3244157417U)));
}
