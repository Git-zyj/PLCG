/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142450
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
    var_11 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (13002427681257333021ULL)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_1] [14LL] [i_2] [i_1] = ((/* implicit */unsigned short) ((((arr_7 [i_1] [i_3] [i_2] [i_3] [i_3]) && (var_8))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_8 [(short)10] [i_1] [i_2] [i_3] [i_2]))))));
                            var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) -1738023648))))) > (((/* implicit */int) var_8))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */short) 1738023647);
                var_13 = ((/* implicit */short) 1073741823ULL);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_17 [8ULL] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 2402914577515157950LL))))));
            arr_18 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1738023648)) ? (((((/* implicit */_Bool) (short)16384)) ? (((/* implicit */int) (unsigned short)42024)) : (2147483625))) : (-2026423171)));
            var_14 = max((((arr_12 [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (15125595402977636029ULL))), (min((arr_1 [i_4]), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)32767)), (-1161994329)))))));
        }
        for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            arr_23 [i_4] [i_6] [i_4] = ((/* implicit */long long int) min((min((arr_14 [i_4]), (arr_14 [i_4]))), (arr_14 [i_4])));
            var_15 = ((min((arr_0 [i_6]), ((_Bool)0))) ? (-7823404617219597028LL) : (((/* implicit */long long int) max((((((/* implicit */_Bool) 1473696342)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))))), (((/* implicit */unsigned int) arr_12 [(unsigned short)2]))))));
            arr_24 [i_6] [i_4] [i_6] = ((/* implicit */unsigned short) (signed char)0);
        }
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            for (unsigned char i_8 = 2; i_8 < 11; i_8 += 4) 
            {
                {
                    arr_33 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (4582743317795693921LL) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)-119)), ((short)1536)))))));
                    var_16 ^= ((/* implicit */_Bool) 63);
                    var_17 = ((/* implicit */unsigned char) (unsigned short)26583);
                    arr_34 [i_4] [5U] = max((max((14710087616158040035ULL), (((/* implicit */unsigned long long int) arr_16 [i_8 - 1] [i_8 - 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) (signed char)127))))));
                }
            } 
        } 
        arr_35 [i_4] [i_4] |= (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)34366))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) 
    {
        for (short i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (var_2)));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((14469398229930521821ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_9] [i_10] [i_11] [i_10])))))))) ? (max((arr_1 [i_11]), (((/* implicit */unsigned long long int) arr_8 [i_11] [i_10] [i_11] [i_11] [i_10])))) : (((/* implicit */unsigned long long int) ((arr_0 [i_10]) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_7 [i_11] [i_10] [i_10] [i_9] [i_9]))))))))));
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 20; i_12 += 3) 
                    {
                        for (short i_13 = 0; i_13 < 20; i_13 += 2) 
                        {
                            {
                                arr_49 [i_9] [i_10] [i_11] [i_12] [i_13] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_9]))) * (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_39 [i_9])) * (((/* implicit */int) arr_39 [i_10])))))));
                                arr_50 [i_9] [i_12] [i_11] [i_10] [i_9] = ((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-15)), (arr_36 [i_9])))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)38))))))), (((((/* implicit */_Bool) arr_1 [i_9])) && (((/* implicit */_Bool) (unsigned char)10))))));
                                var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_39 [i_9]), (arr_39 [i_9]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_14 = 0; i_14 < 17; i_14 += 3) 
    {
        for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 2) 
        {
            {
                arr_55 [i_14] [(signed char)5] [i_14] = ((/* implicit */unsigned long long int) arr_42 [i_14] [i_15] [i_14] [i_15]);
                var_21 &= ((/* implicit */long long int) min((((/* implicit */short) ((((/* implicit */unsigned long long int) arr_38 [i_15])) == (min((((/* implicit */unsigned long long int) (signed char)62)), (arr_53 [i_14] [i_15])))))), (min((var_5), (((/* implicit */short) arr_44 [i_14] [i_15] [i_15] [i_15]))))));
            }
        } 
    } 
}
