/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100861
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [14] [i_1] [i_0 - 2] |= ((/* implicit */long long int) 1148417904979476480ULL);
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
                {
                    var_12 = ((/* implicit */short) (signed char)-25);
                    arr_9 [i_2] [i_0] [i_0 - 3] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64810))) : (arr_0 [i_0]))), (((long long int) (unsigned short)726))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)(-32767 - 1))), (arr_3 [i_0] [8LL] [i_2])))), (min((13981168675100692239ULL), (((/* implicit */unsigned long long int) (unsigned short)9175))))))));
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) arr_7 [i_0] [10U] [i_2] [i_0]))));
                }
                for (long long int i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
                {
                    var_14 |= ((/* implicit */_Bool) (-((((!(((/* implicit */_Bool) arr_8 [18] [18])))) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) arr_8 [(_Bool)1] [(_Bool)1]))))));
                    arr_13 [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0] [i_0 - 2])) ? (arr_12 [i_0 - 2] [i_0] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
                    arr_14 [i_0 - 2] [i_0] [(_Bool)1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)56361))))), (max((arr_6 [(unsigned char)0]), (((/* implicit */unsigned long long int) (unsigned char)163))))))) ? (min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64810))) / (9197930823012845585ULL))))) : (((unsigned long long int) arr_7 [i_0] [i_0] [(unsigned char)7] [(_Bool)1]))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (max((max((((/* implicit */unsigned int) var_11)), (212476545U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)218))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-29774)) : (((/* implicit */int) (short)-1)))))));
                }
                for (long long int i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                {
                    var_16 *= ((/* implicit */unsigned long long int) (((((((!(((/* implicit */_Bool) (unsigned char)218)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 - 1]))) : (((long long int) (short)-29774)))) + (9223372036854775807LL))) << (((max((((/* implicit */int) min((((/* implicit */short) (signed char)127)), (arr_8 [(short)0] [(signed char)10])))), (((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */int) (unsigned short)53481)) : (-643765274))))) - (53481)))));
                    var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (short)-29774)) | (((/* implicit */int) var_11)))) > (((/* implicit */int) max(((short)26169), (arr_8 [i_0] [i_0])))))))) / (min((((/* implicit */long long int) ((arr_15 [i_0 + 1] [i_1] [(unsigned short)10]) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (unsigned short)34345))))), (min((((/* implicit */long long int) (_Bool)1)), (arr_0 [i_4])))))));
                    arr_18 [i_0] = (short)-32756;
                }
                var_18 = ((/* implicit */short) 2630997448U);
                arr_19 [(unsigned short)16] [i_1] |= ((/* implicit */long long int) 4);
            }
        } 
    } 
    var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0))))) : (((/* implicit */int) var_8))))) ? (var_7) : (var_7)));
    var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 812117437)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (min((1292196870980933329LL), (-7772653175807513943LL))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (min((((/* implicit */unsigned short) var_2)), (var_3)))))))));
}
