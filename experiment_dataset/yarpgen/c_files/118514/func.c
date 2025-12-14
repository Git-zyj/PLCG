/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118514
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)84))))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) / (((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) (unsigned char)69))))));
    }
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) min(((~(((arr_4 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)141))) : (8959657270156224949LL))))), (5822140241061510270LL)));
        /* LoopSeq 4 */
        for (int i_2 = 4; i_2 < 8; i_2 += 4) 
        {
            var_16 |= ((/* implicit */long long int) max((arr_2 [i_1]), ((!(((/* implicit */_Bool) (unsigned short)58804))))));
            var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((11103902517509143978ULL), (((/* implicit */unsigned long long int) -160610846140152917LL)))), ((((_Bool)1) ? (15711752657757272042ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1])))))))) ? ((+((+(2201133716334976117LL))))) : (((/* implicit */long long int) min((((/* implicit */int) arr_8 [i_1])), ((+(((/* implicit */int) (short)16988)))))))));
            var_18 ^= ((/* implicit */long long int) (unsigned short)31254);
        }
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            var_19 = ((/* implicit */unsigned int) arr_10 [i_1]);
            var_20 = ((((/* implicit */int) arr_2 [i_1])) < (((/* implicit */int) arr_2 [i_3])));
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) arr_17 [i_1] [i_1] [i_4] [i_5] [i_6] [i_4]);
                            var_22 = ((/* implicit */short) ((unsigned short) (_Bool)1));
                            var_23 += ((/* implicit */unsigned int) 11015262571839522996ULL);
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            var_24 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned char) (_Bool)1)));
            var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) 2201133716334976098LL)))), ((!(((/* implicit */_Bool) (signed char)1))))))), ((unsigned short)39373)));
        }
        for (long long int i_8 = 2; i_8 < 11; i_8 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                var_26 = ((/* implicit */_Bool) ((signed char) (unsigned short)8415));
                var_27 = ((/* implicit */long long int) (((_Bool)1) ? (arr_22 [i_8 + 1] [i_8 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218)))));
                /* LoopSeq 2 */
                for (int i_10 = 2; i_10 < 8; i_10 += 4) 
                {
                    var_28 ^= ((/* implicit */unsigned short) ((unsigned int) (unsigned char)207));
                    var_29 ^= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_3 [i_10])) & (((/* implicit */int) arr_24 [i_1] [i_8] [i_9] [i_1])))));
                }
                for (short i_11 = 3; i_11 < 11; i_11 += 1) 
                {
                    var_30 = ((/* implicit */short) (+(((/* implicit */int) (short)13242))));
                    arr_32 [i_1] |= ((/* implicit */short) 2035312895);
                }
            }
            for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                var_31 = ((/* implicit */_Bool) ((unsigned long long int) (~(((unsigned long long int) (unsigned char)37)))));
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    for (signed char i_14 = 1; i_14 < 8; i_14 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)112)), (7431481501870028620ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((-811139149868927701LL), (8660450556985350387LL)))))) : (((-5075480435531518166LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)53)))))));
                            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) 601695216083243496LL)) ? (arr_22 [i_1] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((193363409) != (((/* implicit */int) (unsigned short)22467)))))))))));
                            var_34 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) -752441266)) ? (max((((/* implicit */long long int) (_Bool)1)), (-1LL))) : (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)32)), (-1459420187)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) 7))))))));
                            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)77)) - (52)))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) & (4197469960958399532ULL)))))) ? (min((arr_29 [i_14] [i_14 + 2] [i_14] [i_14] [i_14] [i_14]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-7))) - (5822140241061510270LL)))))) : (((/* implicit */unsigned long long int) ((((7282834384890420332ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (18446744073709551615ULL)))) : (((/* implicit */int) max(((unsigned char)158), ((unsigned char)211)))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                var_36 = ((/* implicit */long long int) ((arr_38 [i_1] [i_8 + 1] [i_8 - 1] [i_8]) - (((/* implicit */unsigned int) ((int) arr_12 [i_15] [i_8 + 1] [i_1] [i_1])))));
                arr_43 [i_1] [i_8 - 2] [i_8] [i_1] = ((/* implicit */long long int) ((unsigned char) (signed char)-31));
            }
            var_37 = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) (unsigned char)50)), (-242420362))), (((/* implicit */int) arr_23 [i_8]))));
        }
        var_38 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_1])) == (((/* implicit */int) ((unsigned char) (unsigned short)52416))))) ? (max((((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (short)-326)))), (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_1] [i_1])))))))));
    }
}
