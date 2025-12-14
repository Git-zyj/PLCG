/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119539
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) -39798102))))), (max((((/* implicit */int) var_6)), (-374989628))))))));
                var_20 += ((/* implicit */int) ((unsigned int) arr_0 [i_0] [i_1]));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    arr_14 [i_2] [i_3] [i_3] [i_4] = ((/* implicit */short) ((_Bool) min((arr_5 [i_4] [i_3]), (((/* implicit */unsigned long long int) var_16)))));
                    var_21 ^= ((/* implicit */int) min((arr_12 [i_4] [i_3] [i_3] [i_2]), (((/* implicit */long long int) max((((/* implicit */int) (short)-1286)), (min((374989605), (((/* implicit */int) arr_11 [i_4] [i_3] [i_2])))))))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        arr_17 [i_4] [i_4] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 992184679)) ? ((+(((((/* implicit */_Bool) 1537506573842891282LL)) ? (arr_9 [i_2] [i_4] [i_4]) : (((/* implicit */unsigned int) -1752943233)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) -374989627))))));
                        arr_18 [i_4] [i_3] [i_3] [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 374989627)), (14718043501877029917ULL)));
                        arr_19 [i_2] [i_4] [i_3] [i_4] = ((unsigned short) -1187862378);
                        arr_20 [i_4] = ((/* implicit */int) 3349797035U);
                    }
                }
                for (short i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                {
                    arr_23 [i_6] [i_6] [i_3] [i_2] = ((/* implicit */signed char) arr_3 [i_2] [i_6]);
                    arr_24 [i_6] [i_6] [i_3] [i_2] = ((/* implicit */short) max(((+(((((/* implicit */_Bool) 2110038724)) ? (3728700571832521718ULL) : (((/* implicit */unsigned long long int) 374989634)))))), (((/* implicit */unsigned long long int) ((((-2115449401) + (2147483647))) >> (((((/* implicit */int) (signed char)93)) - (78))))))));
                    arr_25 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((short) 945170257U));
                }
                for (short i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 13853440281890221010ULL)) || (((/* implicit */_Bool) 14718043501877029928ULL)))))))), (((((/* implicit */_Bool) 8373057271576685914LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)20761)) ? (-2110038731) : (((/* implicit */int) (short)-30612))))) : (max((((/* implicit */long long int) -2110038724)), (-8790117022471517824LL))))))))));
                    arr_30 [i_2] [i_3] [i_7] [i_7] = ((/* implicit */unsigned long long int) var_7);
                }
                var_23 *= ((/* implicit */short) (+(1842419647291708633ULL)));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_8])) ? (((/* implicit */int) max((((/* implicit */short) arr_0 [i_8] [i_8])), (var_4)))) : (((/* implicit */int) var_17))))) ? (((/* implicit */int) var_19)) : ((+((-(((/* implicit */int) var_16))))))));
        var_25 ^= ((/* implicit */short) (-((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64486))) : (3728700571832521687ULL)))));
        arr_34 [i_8] = ((/* implicit */signed char) max((374989627), (-1324995694)));
        var_26 = ((/* implicit */short) -2110038726);
    }
    for (int i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        arr_39 [i_9] = ((/* implicit */_Bool) (-(min(((+(16982634162890443892ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2110038726)) ? (2118058003) : (((/* implicit */int) (unsigned char)198)))))))));
        arr_40 [i_9] = ((/* implicit */short) 15145241920637379810ULL);
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (signed char)-105))));
        arr_41 [i_9] = ((/* implicit */unsigned char) ((2147483635) <= (((/* implicit */int) arr_29 [i_9] [i_9] [i_9] [i_9]))));
        var_28 += ((/* implicit */int) ((signed char) arr_9 [i_9] [i_9] [i_9]));
    }
    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) 
    {
        arr_45 [i_10] = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_10] [i_10] [i_10]))))), (max((((((/* implicit */_Bool) arr_15 [i_10] [i_10] [i_10])) ? (3728700571832521718ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))), (((/* implicit */unsigned long long int) arr_38 [i_10])))));
        arr_46 [i_10] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_10] [i_10])) ? (((/* implicit */int) arr_1 [i_10])) : (((/* implicit */int) ((signed char) 2572146171U)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (14475855675254587733ULL)))) ? (((((/* implicit */_Bool) -2110038728)) ? (1408223445815923742LL) : (((/* implicit */long long int) -2110038731)))) : (((/* implicit */long long int) arr_13 [i_10] [i_10] [i_10] [i_10]))))));
    }
    var_29 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)192)), (530674299U)));
}
