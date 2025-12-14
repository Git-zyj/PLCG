/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187194
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
    var_10 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)1023)) << (((((/* implicit */int) (short)-1023)) + (1037)))))), (min((((/* implicit */unsigned long long int) (short)-19486)), (12769904914896417179ULL)))));
    var_11 = ((/* implicit */short) ((signed char) (-(((/* implicit */int) ((unsigned char) (short)28671))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-26484)))) : (((/* implicit */int) (short)1023))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)10294)) ? (var_7) : (((/* implicit */int) (unsigned short)36581))))), (max((((/* implicit */unsigned long long int) (short)-32616)), (15655863618278604595ULL))))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 1; i_2 < 23; i_2 += 4) /* same iter space */
            {
                arr_8 [i_0] = ((/* implicit */unsigned long long int) min((-4704237193353142679LL), (((/* implicit */long long int) 4223311578U))));
                arr_9 [i_0] [i_1] [i_1] [10U] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min(((~(var_6))), (((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)1)), (var_5))))))), (((unsigned long long int) (-(((/* implicit */int) (unsigned short)2115)))))));
                /* LoopNest 2 */
                for (signed char i_3 = 3; i_3 < 21; i_3 += 2) 
                {
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        {
                            arr_15 [i_4] [i_4] [i_3] [(signed char)5] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 127)) ? (494363592U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (-706592399))))))) ? (min((((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) min((-1), (((/* implicit */int) (short)-12491))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
                            arr_16 [i_0] [14LL] [i_4] [i_0] |= ((unsigned long long int) ((((/* implicit */_Bool) (signed char)116)) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4))))));
                            var_13 = min((((/* implicit */int) (!(((/* implicit */_Bool) (short)32616))))), ((-(((/* implicit */int) (short)-27172)))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) max((min((((var_0) << (((18446744073709551595ULL) - (18446744073709551584ULL))))), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) max((216024255U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)28955)) : (((/* implicit */int) (unsigned short)65535)))))))))))));
            }
            /* vectorizable */
            for (signed char i_5 = 1; i_5 < 23; i_5 += 4) /* same iter space */
            {
                arr_19 [(short)16] [(short)16] [i_1] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_1)))))));
                arr_20 [i_5] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 7009120104669161900ULL)) && (((/* implicit */_Bool) (unsigned char)0)))));
            }
            var_15 &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)-32616)))) ? (((/* implicit */unsigned int) ((int) max(((signed char)27), ((signed char)56))))) : (((((/* implicit */_Bool) var_1)) ? (((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50467))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_5))))))))));
            /* LoopNest 3 */
            for (short i_6 = 1; i_6 < 23; i_6 += 4) 
            {
                for (unsigned int i_7 = 1; i_7 < 22; i_7 += 4) 
                {
                    for (signed char i_8 = 4; i_8 < 23; i_8 += 2) 
                    {
                        {
                            var_16 -= ((/* implicit */short) (+(((unsigned long long int) (+(((/* implicit */int) (short)-1004)))))));
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) -900226355)), (-3333677649875376569LL)))))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 1; i_11 < 20; i_11 += 4) 
                {
                    for (unsigned char i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        {
                            arr_42 [i_0] [i_9] [i_11] [i_9] [i_0] [i_11] [19U] = ((/* implicit */long long int) min(((~(3083128911U))), (min((168376331U), (((unsigned int) (short)-2542))))));
                            arr_43 [(unsigned short)15] [i_9] [i_0] [(unsigned short)15] [i_0] [i_11] [i_12] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (signed char)9)) <= (((/* implicit */int) (signed char)-10)))))));
                            arr_44 [i_9] [i_11] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_1))));
                        }
                    } 
                } 
                arr_45 [3U] [i_9] [i_0] = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned short) (short)-1))))))), (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)22585)) : (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) min(((unsigned char)233), (((/* implicit */unsigned char) var_5)))))))));
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 24; i_13 += 4) 
                {
                    for (unsigned char i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2548)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32757))) : (2746831755U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((900226347), (((/* implicit */int) (unsigned char)187))))))) : (((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_1))))) ? (min((5257692470084544136ULL), (((/* implicit */unsigned long long int) (unsigned short)52064)))) : (((((/* implicit */_Bool) (unsigned short)3009)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36579))) : (1934800330509513360ULL)))))));
                            var_19 += ((/* implicit */short) max((((unsigned long long int) min((var_4), (var_4)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (min((var_8), (var_8))))))));
                            arr_52 [i_0] [i_9] [(unsigned short)16] [i_0] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-32757)) ? (max((min((13834364768525114607ULL), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))))) : (((((/* implicit */_Bool) min(((unsigned short)13469), (var_2)))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 3) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned short) var_6);
                arr_57 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)25961))))), (min((3758096384U), (((/* implicit */unsigned int) (short)21348))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551606ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)9385))))), ((+(var_9)))))));
            }
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)36580)), (max((min((((/* implicit */unsigned int) (signed char)-9)), (var_8))), (max((((/* implicit */unsigned int) (_Bool)1)), (3597743754U))))))))));
        }
    }
    for (signed char i_16 = 1; i_16 < 10; i_16 += 3) 
    {
        var_22 *= max(((-(var_6))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)25592))))));
        arr_62 [i_16] [(short)8] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) (-(2196701395U)))))));
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_23 = ((/* implicit */int) max((((min((var_6), (((/* implicit */unsigned int) (signed char)-1)))) << ((((+(((/* implicit */int) var_4)))) - (9216))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)39575)))))));
        var_24 = ((/* implicit */long long int) min((((unsigned short) min((2147483647), (((/* implicit */int) var_5))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8)))))));
    }
    var_25 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-8950)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)25595))) : (1548135527U)))) : (max((3131970753751027769ULL), (((/* implicit */unsigned long long int) var_5))))))));
}
